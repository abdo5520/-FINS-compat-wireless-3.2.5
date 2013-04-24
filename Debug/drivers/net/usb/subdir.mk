################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/usb/cdc_ether.c \
../drivers/net/usb/rndis_host.c \
../drivers/net/usb/usbnet.c 

OBJS += \
./drivers/net/usb/cdc_ether.o \
./drivers/net/usb/rndis_host.o \
./drivers/net/usb/usbnet.o 

C_DEPS += \
./drivers/net/usb/cdc_ether.d \
./drivers/net/usb/rndis_host.d \
./drivers/net/usb/usbnet.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/usb/%.o: ../drivers/net/usb/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


