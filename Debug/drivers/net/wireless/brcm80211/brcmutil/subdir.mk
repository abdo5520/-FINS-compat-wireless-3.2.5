################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/wireless/brcm80211/brcmutil/utils.c 

OBJS += \
./drivers/net/wireless/brcm80211/brcmutil/utils.o 

C_DEPS += \
./drivers/net/wireless/brcm80211/brcmutil/utils.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/brcm80211/brcmutil/%.o: ../drivers/net/wireless/brcm80211/brcmutil/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


