################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/wireless/rtl818x/rtl8187/dev.c \
../drivers/net/wireless/rtl818x/rtl8187/leds.c \
../drivers/net/wireless/rtl818x/rtl8187/rfkill.c \
../drivers/net/wireless/rtl818x/rtl8187/rtl8225.c 

OBJS += \
./drivers/net/wireless/rtl818x/rtl8187/dev.o \
./drivers/net/wireless/rtl818x/rtl8187/leds.o \
./drivers/net/wireless/rtl818x/rtl8187/rfkill.o \
./drivers/net/wireless/rtl818x/rtl8187/rtl8225.o 

C_DEPS += \
./drivers/net/wireless/rtl818x/rtl8187/dev.d \
./drivers/net/wireless/rtl818x/rtl8187/leds.d \
./drivers/net/wireless/rtl818x/rtl8187/rfkill.d \
./drivers/net/wireless/rtl818x/rtl8187/rtl8225.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/rtl818x/rtl8187/%.o: ../drivers/net/wireless/rtl818x/rtl8187/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


