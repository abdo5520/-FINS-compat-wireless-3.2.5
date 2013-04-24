/**
 * stub80211.c
 *
 *  Created on: Mar 27, 2013
 *      Author: Abdallah Abdallah
 */
#define M_LICENSE	"GPL and additional rights"
#define M_DESCRIPTION	"Adding itself to the b43 driver to work as 80211 stub and communicate with the userspace"
#define M_AUTHOR	"Abdallah Abdallah <abdo.aast@gmail.com>"


#include "stub80211.h"	/* Defs for this module */
//#include <time.h>

#define RECV_BUFFER_SIZE	4096//1024//NLMSG_DEFAULT_SIZE//NLMSG_GOODSIZE//16384//8192	// Same as userspace, Pick an appropriate value here //NLMSG_GOODSIZE
//#define AF_FINS 2
//#define PF_FINS AF_FINS

// reserved numnbers ends in 19 according to netlink.h
// The wedge netlink takes already value of 20
// Then NETLINK_stub80211 takes value 21
//only sent from userspace80211 to stub80211
#define userspace80211_start_call 19
#define userspace80211_stop_call 20
#define poll_event_call 21


#define NETLINK_stub80211 21

//commenting stops debug printout
#define DEBUG
#define IMPORTANT
#define ERROR


#ifdef DEBUG
#define PRINT_DEBUG(format, args...) printk("FINS: DEBUG: %s, %d: "format"\n", __FUNCTION__, __LINE__, ##args);
#else
#define PRINT_DEBUG(format, args...)
#endif

#ifdef IMPORTANT
#define PRINT_IMPORTANT(format, args...) printk("FINS: IMPORTANT: %s, %d: "format"\n", __FUNCTION__, __LINE__, ##args);
#else
#define PRINT_IMPORTANT(format, args...)
#endif

#ifdef ERROR
#define PRINT_ERROR(format, args...) printk("FINS: ERROR: %s, %d: "format"\n", __FUNCTION__, __LINE__, ##args);
#else
#define PRINT_ERROR(format, args...)
#endif

// Data declarations
/* Data for netlink sockets */
struct sock *fins_nl_sk = NULL;
int fins_daemon_pid; // holds the pid of the FINS daemon so we know who to send back to
struct semaphore link_sem;
int print_exit_debug(const char *func, int line, int rc) {
#ifdef DEBUG
	printk(KERN_DEBUG "FINS: DEBUG: %s, %d: Exited: %d\n", func, line, rc);
#endif
	return rc;
}

int print_exit_important(const char *func, int line, int rc) {
	printk(KERN_DEBUG "FINS: IMPORTANT: %s, %d: Exited: %d\n", func, line, rc);
	return rc;
}


/* FINS stub80211 Netlink functions  */
/*
 * Sends len bytes from buffer buf to process pid, and sets the flags.
 * If buf is longer than RECV_BUFFER_SIZE, it's broken into sequential messages.
 * Returns 0 if successful or -1 if an error occurred.
 */

//assumes msg_buf is just the msg, does not have a prepended msg_len
//break msg_buf into parts of size RECV_BUFFER_SIZE with a prepended header (header part of RECV...)
//prepend msg header: total msg length, part length, part starting position
int nl_send_msg(int pid, unsigned int seq, int type, void *buf, int len, int flags) {
	struct nlmsghdr *nlh;
	struct sk_buff *skb;
	int ret_val;

	//#################### Debug
#ifdef DEBUG
	u_char *print_buf;
	u_char *print_pt;
	u_char *pt;
	int i;
#endif
	//####################

	PRINT_DEBUG("Entered: pid=%d, seq=%d, type=%d, len=%d", pid, seq, type, len);

	//####################
#ifdef DEBUG
	if (0) {
		print_buf = (u_char *) kmalloc(3 * len+1, GFP_KERNEL);
		if (print_buf == NULL) {
			PRINT_ERROR("print_buf allocation fail");
		} else {
			print_pt = print_buf;
			pt = buf;
			for (i = 0; i < len; i++) {
				if (i == 0) {
					sprintf(print_pt, "%02x", *(pt + i));
					print_pt += 2;
				} else if (i % 4 == 0) {
					sprintf(print_pt, ":%02x", *(pt + i));
					print_pt += 3;
				} else {
					sprintf(print_pt, " %02x", *(pt + i));
					print_pt += 3;
				}
			}
			*print_pt = '\0';
			PRINT_DEBUG("buf='%s'", print_buf);
			kfree(print_buf);
		}
	}
#endif
	//####################

	// Allocate a new netlink message
	skb = nlmsg_new(len, 0); // nlmsg_new(size_t payload, gfp_t flags)
	if (skb == NULL) {
		PRINT_ERROR("netlink Failed to allocate new skb");
		return -1;
	}

	// Load nlmsg header
	// nlmsg_put(struct sk_buff *skb, u32 pid, u32 seq, int type, int payload, int flags)
	nlh = nlmsg_put(skb, KERNEL_PID, seq, type, len, flags);
	NETLINK_CB(skb).dst_group = 0; // not in a multicast group

	// Copy data into buffer
	memcpy(NLMSG_DATA(nlh), buf, len);

	// Send the message
	//ret_val = nlmsg_unicast(fins_nl_sk, skb, pid);
	ret_val = netlink_unicast(fins_nl_sk, skb, pid, 0); //blocking call

	if (ret_val < 0) {
		PRINT_ERROR("netlink error sending to user");

		return -1;
	}

	PRINT_DEBUG("Exited: pid=%d, seq=%d, type=%d, len=%d, ret_val=%d", pid, seq, type, len, ret_val);
	return 0;
} // end of function nl_send_msg

/**
 *
 * @brief int nl_send(int pid, void *msg_buf, int msg_len, int flags)
 *
 *
 */



int nl_send(int pid, void *msg_buf, int msg_len, int flags) {
	int ret;
	void *part_buf;
	u_char *msg_pt;
	int pos;
	u_int seq;
	struct nl_stub80211_to_FINS_hdr *part_hdr;
	//u_char *hdr_msg_len;
	//u_char *hdr_part_len;
	//u_char *hdr_pos;
	u_char *msg_start;
	int header_size;
	int part_len;

	//#################### Debug
#ifdef DEBUG
	u_char *print_buf;
	u_char *print_pt;
	u_char *pt;
	int i;
#endif
	//####################

	PRINT_DEBUG("Entered: pid=%d, msg_buf=%p, msg_len=%d, flags=0x%x", pid, msg_buf, msg_len, flags);

	if (down_interruptible(&link_sem)) {
		PRINT_ERROR("link_sem acquire fail");
	}

	//#################### Debug
#ifdef DEBUG
	if (0) {
		print_buf = (u_char *) kmalloc(3 * msg_len+1, GFP_KERNEL);
		if (print_buf == NULL) {
			PRINT_ERROR("print_buf allocation fail");
		} else {
			print_pt = print_buf;
			pt = msg_buf;
			for (i = 0; i < msg_len; i++) {
				if (i == 0) {
					sprintf(print_pt, "%02x", *(pt + i));
					print_pt += 2;
				} else if (i % 4 == 0) {
					sprintf(print_pt, ":%02x", *(pt + i));
					print_pt += 3;
				} else {
					sprintf(print_pt, " %02x", *(pt + i));
					print_pt += 3;
				}
			}
			*print_pt = '\0';
			PRINT_DEBUG("msg_buf='%s'", print_buf);
			kfree(print_buf);
		}
	}
#endif
	//####################

	part_buf = (u_char *) kmalloc(RECV_BUFFER_SIZE, GFP_KERNEL);
	if (part_buf == NULL) {
		PRINT_ERROR("part_buf allocation fail");
		up(&link_sem);
		return -1;
	}

	msg_pt = msg_buf;
	pos = 0;
	seq = 0;

	part_hdr = (struct nl_stub80211_to_FINS_hdr *) part_buf;
	//hdr_msg_len = part_buf;
	//hdr_part_len = hdr_msg_len + sizeof(int);
	//hdr_pos = hdr_part_len + sizeof(int);
	//msg_start = hdr_pos + sizeof(int);
	msg_start = part_buf + sizeof(struct nl_stub80211_to_FINS_hdr);

	//header_size = msg_start - hdr_msg_len;
	header_size = sizeof(struct nl_stub80211_to_FINS_hdr);
	part_len = RECV_BUFFER_SIZE - header_size;

	//*(int *) hdr_msg_len = msg_len;
	//*(int *) hdr_part_len = part_len;
	part_hdr->msg_len = msg_len;
	part_hdr->part_len = part_len;

	while (msg_len - pos > part_len) {
		PRINT_DEBUG("pos=%d, seq=%d", pos, seq);

		//*(int *) hdr_pos = pos;
		part_hdr->pos = pos;

		memcpy(msg_start, msg_pt, part_len);

		ret = nl_send_msg(pid, seq, 0x0, part_buf, RECV_BUFFER_SIZE, flags/*| NLM_F_MULTI*/);
		if (ret < 0) {
			PRINT_ERROR("netlink error sending seq %d to user", seq);
			up(&link_sem);
			PRINT_DEBUG("Exited: pid=%d, msg_buf=%p, msg_len=%d, flags=0x%x, ret=%d", pid, msg_buf, msg_len, flags, -1);
			return -1;
		}
		//msleep(1);

		msg_pt += part_len;
		pos += part_len;
		seq++;
	}

	PRINT_DEBUG("pos=%d, seq=%d", pos, seq);

	part_len = msg_len - pos;
	//*(int *) hdr_part_len = part_len;
	//*(int *) hdr_pos = pos;
	part_hdr->part_len = part_len;
	part_hdr->pos = pos;

	memcpy(msg_start, msg_pt, part_len);

	ret = nl_send_msg(pid, seq, NLMSG_DONE, part_buf, header_size + part_len, flags);
	if (ret < 0) {
		PRINT_ERROR("netlink error sending seq %d to user", seq);
		up(&link_sem);
		PRINT_DEBUG("Exited: pid=%d, msg_buf=%p, msg_len=%d, flags=0x%x, ret=%d", pid, msg_buf, msg_len, flags, -1);
		return -1;
	}

	kfree(part_buf);
	up(&link_sem);

	PRINT_DEBUG("Exited: pid=%d, msg_buf=%p, msg_len=%d, flags=0x%x, ret=%d", pid, msg_buf, msg_len, flags, 0);
	return 0;
} // end of function nl_send

/**
 *
 * void nl_data_ready(struct sk_buff *skb)
 *
 * This function is automatically called when the kernel receives a datagram on the corresponding netlink socket.
 */
void nl_data_ready(struct sk_buff *skb) {

	static int message_counter=0;
	message_counter++;
	struct nlmsghdr *nlh;
	u_char *buffer; // Pointer to data in payload
	u_char *buf;
//	strcat(buffer, "LOLOLOLOLOLO");
	int len; // Payload length
	int commandValueLength;
	u_char *commandValue;
	int pid; // pid of sending process

	struct nl_userspace80211_to_stub80211_msg *messageToParse;
	u_int reply_call; // a number corresponding to the type of socketcall this packet is in response to

	PRINT_DEBUG("Entered: skb=%p", skb);

	if (skb == NULL) {
		PRINT_DEBUG("Exiting: skb NULL \n");
		return;
	}
	nlh = (struct nlmsghdr *) skb->data;
	pid = nlh->nlmsg_pid; // get pid from the header

	// Get a pointer to the start of the data in the buffer and the buffer (payload) length
	buf = (u_char *) (NLMSG_DATA(nlh));
	len = NLMSG_PAYLOAD(nlh, 0);

	PRINT_DEBUG("Core Process ID nl_pid=%d,Payload Length  nl_len=%d", pid, len);

	// **** Remember the LKM must be up first, then the daemon,
	// but the daemon must make contact before any applications try to use socket()

	if (pid == -1) { // if the socket daemon hasn't made contact before
		// Print what we received
		PRINT_DEBUG("No msg pID, received='%p'", buf);
	} else {
	/**	if (len >= sizeof(struct nl_FINS_to_stub80211)) {
			hdr = (struct nl_FINS_to_stub80211 *) buf;
			len -= sizeof(struct nl_FINS_to_stub80211);
	*/
		if (len >= sizeof(struct nl_userspace80211_to_stub80211_msg )) {
			messageToParse = (struct nl_userspace80211_to_stub80211_msg *) buf;

			commandValueLength = len - sizeof (struct nl_userspace80211_to_stub80211_msg);
			if (messageToParse->commandValueLength != messageToParse->commandValueLength )
				PRINT_ERROR("THIS IS FATAL PROBLEM. length calcualted, does not equal"
						"length in the structure");

			PRINT_DEBUG("Received Message number = %d  call_type=%d, call_valueLength=%d, call_valuePointer=%c",
			message_counter,messageToParse->command_type, messageToParse->commandValueLength, messageToParse->value);

			if ( (messageToParse->commandValueLength ==0) &&
					(messageToParse->commandValueLength == messageToParse->commandValueLength ))
			{
				switch (messageToParse->command_type)

				{

				case STUB80211_CMD_SPECS:
					PRINT_DEBUG("STUB80211_CMD_SPECS:");
					break;
				case STUB80211_CMD_GETRATE:
					PRINT_DEBUG("STUB80211_CMD_GETRATE:");

					break;

				case STUB80211_CMD_SETRATE:
					PRINT_DEBUG("STUB80211_CMD_SETRATE::");
					break;

				case STUB80211_CMD_GETTXPOWER:
					PRINT_DEBUG("STUB80211_CMD_GETTXPOWER:::");
					break;

				case STUB80211_CMD_SETTXPOWER:
					PRINT_DEBUG("STUB80211_CMD_SETTXPOWER:::");
					break;

				case STUB80211_CMD_GETCW:
					PRINT_DEBUG("STUB80211_CMD_GETCW:::");

					break;

				case STUB80211_CMD_SETCW:
					PRINT_DEBUG("STUB80211_CMD_SETCW:::");

					break;

				case STUB80211_CMD_GETCWMIN:
					PRINT_DEBUG("STUB80211_CMD_GETCWMIN:::");
					break;

				case STUB80211_CMD_SETCWMIN:
					PRINT_DEBUG("STUB80211_CMD_SETCWMIN:::");
					break;

				case STUB80211_CMD_GETCWMAX:
					PRINT_DEBUG("STUB80211_CMD_GETCWMAX:::");
					break;

				case STUB80211_CMD_SETCWMAX:
					PRINT_DEBUG("STUB80211_CMD_SETCWMAX:::");
					break;

				case STUB80211_CMD_GETRSS:
					PRINT_DEBUG("STUB80211_CMD_GETRSS:::");
					break;
				case STUB80211_CMD_GETSTAT:
					PRINT_DEBUG("STUB80211_CMD_GETSTAT:::");
					struct ieee80211_low_level_stats toBeCopied;
					toBeCopied =
					break;





				default:
					PRINT_DEBUG("Command type is not found");

				}


			}
			else if (messageToParse->commandValueLength !=0)
			{
				PRINT_DEBUG("commandValueLength is not zero");
				commandValue = (u_char *) kmalloc(commandValueLength , GFP_KERNEL);
				if (commandValue == NULL) {
					PRINT_ERROR("buffer allocation error");
					return;
				}

				memcpy(commandValue, messageToParse->value, commandValueLength);

			}
			else
			{
				PRINT_DEBUG("\nERROR- should not enter here ever");


			}
			/**
			 * In this segment of code , we parse the message received from the userspace:
			 * According to the list of commands defined between the stub80211 LKM and
			 * the stub80211 userspace thread
			 *
			 */


		} //end of IF
	}  //end of ELSE

	// nl_send(pid, (void *)buffer, 12, 0);

	PRINT_DEBUG("\nExited:sent from PID = %d ---ON---skb=%p", pid,skb);
} // end of nl_data_ready


/* Functions to initialize and teardown the netlink socket */
int setup_fins_netlink(void) {
// nl_data_ready is the name of the function to be called when the kernel receives a datagram on this netlink socket.
fins_nl_sk = netlink_kernel_create(&init_net,NETLINK_stub80211, 0, nl_data_ready, NULL, THIS_MODULE);
// kernel compatibility after changing the netlink_kernel_create definition
//fins_nl_sk = netlink_kernel_create(&init_net,NETLINK_stub80211, 0, nl_data_ready, NULL, THIS_MODULE);

if (fins_nl_sk == NULL) {
	PRINT_ERROR("Error creating socket.");
	return -10;
}

sema_init(&link_sem, 1);

return 0;
}


void teardown_fins_netlink(void) {
// closes the netlink socket
if (fins_nl_sk != NULL) {
	sock_release(fins_nl_sk->sk_socket);
}
}


//int __init fins_stack_stub80211_init(void) {
int fins_stack_stub80211_init(void) {

	PRINT_IMPORTANT("############################################");
	PRINT_IMPORTANT("Loading the fins_stack_stub80211 module");
/**
	 time_t curtime;
     char buffer[256];

	  struct tm *loctime;
	  curtime = time (NULL);

	       loctime = localtime (&curtime);

	       strftime (buffer, 256, "Today is %A, %B %d.\n", loctime);
*/

	if (setup_fins_netlink() !=0 )
		return (1);

	fins_daemon_pid = -1;
	PRINT_IMPORTANT("Made it through the fins_stack_stub80211 initialization");

return 0;
}


int fins_stack_stub80211_exit(void)
{
PRINT_IMPORTANT("Unloading the fins_stack_stub80211 module");
teardown_fins_netlink();

//PRINT_IMPORTANT("Made it through the fins_stack_stub80211 removal");

return 0;
}

/* Set the license and signing info for the module */
MODULE_LICENSE(M_LICENSE);
MODULE_DESCRIPTION(M_DESCRIPTION);
MODULE_AUTHOR(M_AUTHOR);
