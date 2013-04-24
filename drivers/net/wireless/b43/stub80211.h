/**
 * stub80211.h
 *
 *  Created on: Mar 27, 2013
 *      Author: Abdallah Abdallah
 */
#include <linux/module.h>	/* Needed by all modules */
//#include <linux/kernel.h>	/* Needed for KERN_INFO */
//#include <linux/init.h>		/* Needed for the macros */
#include <net/sock.h>		/* Needed for proto and sock struct defs, etc. */
//#include <linux/socket.h>	/* Needed for the sockaddr struct def */
//#include <linux/errno.h>	/* Needed for error number defines */
//#include <linux/aio.h>		/* Needed for fins_sendmsg */
//#include <linux/skbuff.h>	/* Needed for sk_buff struct def, etc. */
//#include <linux/net.h>		/* Needed for socket struct def, etc. */
//#include <linux/netlink.h>	/* Needed for netlink socket API, macros, etc. */
//#include <linux/semaphore.h>	/* Needed to lock/unlock blocking calls with handler */
//#include <asm/uaccess.h>	/** Copy from user */
#include <asm/ioctls.h>		/* Needed for fins_ioctl */
//#include <linux/sockios.h>
//#include <linux/delay.h>	/* For sleep */
#include <linux/if.h>		/* Needed for fins_ioctl */

/*
 * NETLINK_FINS must match a corresponding constant in the userspace daemon program that is to talk to this module.
 * NETLINK_ constants are normally defined in <linux/netlink.h> although adding a constant here would necessitate a
 * full kernel rebuild in order to change it.  This is not necessary, as long as the constant matches in both LKM and
 * userspace program.  To choose an appropriate value, view the linux/netlink.h file and find an unused value
 * (probably best to choose one under 32) following the list of NETLINK_ constants and define the constant here to
 * match that value as well as in the userspace program.
 */
//#define NETLINK_FINS    20	// must match userspace definition
#define KERNEL_PID      0	// This is used to identify netlink traffic into and out of the kernel


//only sent from daemon to wedge
#define daemon_start_call 19
#define daemon_stop_call 20
#define poll_event_call 21

/** Additional calls
 * To hande special cases
 * overwriting the generic functions which write to a socket descriptor
 * in order to make sure that we cover as many applications as possible
 * This range of these functions will start from 30
 */
#define MAX_CALL_TYPES 22

#define ACK 	200
#define NACK 	6666


enum stub80211_commands {
 /* don't change the order or add anything inbetween, this is some sort of ABI! */
         STUB80211_CMD_SPECS,
         STUB80211_CMD_GETRATE,
         STUB80211_CMD_SETRATE,
         STUB80211_CMD_GETTXPOWER,
         STUB80211_CMD_SETTXPOWER,
         STUB80211_CMD_GETCW,
         STUB80211_CMD_SETCW,
         STUB80211_CMD_GETCWMIN,
         STUB80211_CMD_SETCWMIN,
         STUB80211_CMD_GETCWMAX,
         STUB80211_CMD_SETCWMAX,
         STUB80211_CMD_GETRSS,
         STUB80211_CMD_GETSTAT,

         };


/* FINS netlink functions*/
int nl_send(int pid, void *buf, int len, int flags);
int nl_send_msg(int pid, unsigned int seq, int type, void *buf, int len, int flags);
void nl_data_ready(struct sk_buff *skb);

int setup_fins_netlink(void);


struct nl_stub80211_to_FINS_hdr {
	int msg_len;
	int part_len;
	int pos;
};

struct nl_stub80211_to_FINS {
	unsigned long long sock_id;
	int sock_index;

	u_int call_type;
	int call_pid;

	u_int call_id;
	int call_index;
};


struct nl_FINS_to_stub80211 {
	uint32_t call_type;

	union {
		uint32_t call_id;
		uint64_t sock_id; //TODO currently unused, remove if never needed
	};
	union {
		int call_index;
		int sock_index; //TODO currently unused, remove if never needed
	};

	uint32_t ret;
	uint32_t msg;
};


struct nl_userspace80211_to_stub80211_msg {
	uint16_t command_type;

	uint16_t commandValueLength;
	u_char *value;
};

struct fins_wedge_call {
	int running; //TODO remove?

	u_int call_id;
	u_int call_type;

	unsigned long long sock_id;
	int sock_index;
	//TODO timestamp? so can remove after timeout/hit MAX_CALLS cap

	//struct semaphore sem; //TODO remove? might be unnecessary
	struct semaphore wait_sem;

	u_char reply;
	u_int ret;
	u_int msg;
	u_char *buf;
	int len;
};

/**
void wedge_calls_init(void);
int wedge_calls_insert(u_int id, unsigned long long sock_id, int sock_index, u_int type);
int wedge_calls_find(unsigned long long sock_id, int sock_index, u_int type);
int wedge_calls_remove(u_int id);
void wedge_calls_remove_all(void);
void wedge_sockets_init(void);
int wedge_sockets_insert(unsigned long long sock_id, struct sock *sk);
int wedge_sockets_find(unsigned long long sock_id);
int wedge_sockets_remove(unsigned long long sock_id, int sock_index, u_int type);
void wedge_socket_remove_all(void);
int wedge_sockets_wait(unsigned long long sock_id, int sock_index, u_int calltype);
int checkConfirmation(int sock_index);
*/

//int __init fins_stack_stub80211_init(void);

//void __exit fins_stack_stub80211_exit(void);

int fins_stack_stub80211_init(void);


int fins_stack_stub80211_exit(void);




