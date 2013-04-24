################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/wireless/ath/ath6kl/bmi.c \
../drivers/net/wireless/ath/ath6kl/cfg80211.c \
../drivers/net/wireless/ath/ath6kl/debug.c \
../drivers/net/wireless/ath/ath6kl/htc.c \
../drivers/net/wireless/ath/ath6kl/htc_hif.c \
../drivers/net/wireless/ath/ath6kl/init.c \
../drivers/net/wireless/ath/ath6kl/main.c \
../drivers/net/wireless/ath/ath6kl/sdio.c \
../drivers/net/wireless/ath/ath6kl/testmode.c \
../drivers/net/wireless/ath/ath6kl/txrx.c \
../drivers/net/wireless/ath/ath6kl/wmi.c 

OBJS += \
./drivers/net/wireless/ath/ath6kl/bmi.o \
./drivers/net/wireless/ath/ath6kl/cfg80211.o \
./drivers/net/wireless/ath/ath6kl/debug.o \
./drivers/net/wireless/ath/ath6kl/htc.o \
./drivers/net/wireless/ath/ath6kl/htc_hif.o \
./drivers/net/wireless/ath/ath6kl/init.o \
./drivers/net/wireless/ath/ath6kl/main.o \
./drivers/net/wireless/ath/ath6kl/sdio.o \
./drivers/net/wireless/ath/ath6kl/testmode.o \
./drivers/net/wireless/ath/ath6kl/txrx.o \
./drivers/net/wireless/ath/ath6kl/wmi.o 

C_DEPS += \
./drivers/net/wireless/ath/ath6kl/bmi.d \
./drivers/net/wireless/ath/ath6kl/cfg80211.d \
./drivers/net/wireless/ath/ath6kl/debug.d \
./drivers/net/wireless/ath/ath6kl/htc.d \
./drivers/net/wireless/ath/ath6kl/htc_hif.d \
./drivers/net/wireless/ath/ath6kl/init.d \
./drivers/net/wireless/ath/ath6kl/main.d \
./drivers/net/wireless/ath/ath6kl/sdio.d \
./drivers/net/wireless/ath/ath6kl/testmode.d \
./drivers/net/wireless/ath/ath6kl/txrx.d \
./drivers/net/wireless/ath/ath6kl/wmi.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/ath/ath6kl/%.o: ../drivers/net/wireless/ath/ath6kl/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


