################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../drivers/net/wireless/built-in.o 

C_SRCS += \
../drivers/net/wireless/adm8211.c \
../drivers/net/wireless/at76c50x-usb.c \
../drivers/net/wireless/mac80211_hwsim.c \
../drivers/net/wireless/mwl8k.c \
../drivers/net/wireless/rndis_wlan.c 

OBJS += \
./drivers/net/wireless/adm8211.o \
./drivers/net/wireless/at76c50x-usb.o \
./drivers/net/wireless/mac80211_hwsim.o \
./drivers/net/wireless/mwl8k.o \
./drivers/net/wireless/rndis_wlan.o 

C_DEPS += \
./drivers/net/wireless/adm8211.d \
./drivers/net/wireless/at76c50x-usb.d \
./drivers/net/wireless/mac80211_hwsim.d \
./drivers/net/wireless/mwl8k.d \
./drivers/net/wireless/rndis_wlan.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/%.o: ../drivers/net/wireless/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


