################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/wireless/rtlwifi/rtl8192c/dm_common.c \
../drivers/net/wireless/rtlwifi/rtl8192c/fw_common.c \
../drivers/net/wireless/rtlwifi/rtl8192c/main.c \
../drivers/net/wireless/rtlwifi/rtl8192c/phy_common.c 

OBJS += \
./drivers/net/wireless/rtlwifi/rtl8192c/dm_common.o \
./drivers/net/wireless/rtlwifi/rtl8192c/fw_common.o \
./drivers/net/wireless/rtlwifi/rtl8192c/main.o \
./drivers/net/wireless/rtlwifi/rtl8192c/phy_common.o 

C_DEPS += \
./drivers/net/wireless/rtlwifi/rtl8192c/dm_common.d \
./drivers/net/wireless/rtlwifi/rtl8192c/fw_common.d \
./drivers/net/wireless/rtlwifi/rtl8192c/main.d \
./drivers/net/wireless/rtlwifi/rtl8192c/phy_common.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/rtlwifi/rtl8192c/%.o: ../drivers/net/wireless/rtlwifi/rtl8192c/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


