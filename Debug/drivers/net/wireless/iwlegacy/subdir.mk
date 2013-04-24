################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/wireless/iwlegacy/iwl-3945-debugfs.c \
../drivers/net/wireless/iwlegacy/iwl-3945-led.c \
../drivers/net/wireless/iwlegacy/iwl-3945-rs.c \
../drivers/net/wireless/iwlegacy/iwl-3945.c \
../drivers/net/wireless/iwlegacy/iwl-4965-calib.c \
../drivers/net/wireless/iwlegacy/iwl-4965-debugfs.c \
../drivers/net/wireless/iwlegacy/iwl-4965-eeprom.c \
../drivers/net/wireless/iwlegacy/iwl-4965-led.c \
../drivers/net/wireless/iwlegacy/iwl-4965-lib.c \
../drivers/net/wireless/iwlegacy/iwl-4965-rs.c \
../drivers/net/wireless/iwlegacy/iwl-4965-rx.c \
../drivers/net/wireless/iwlegacy/iwl-4965-sta.c \
../drivers/net/wireless/iwlegacy/iwl-4965-tx.c \
../drivers/net/wireless/iwlegacy/iwl-4965-ucode.c \
../drivers/net/wireless/iwlegacy/iwl-4965.c \
../drivers/net/wireless/iwlegacy/iwl-core.c \
../drivers/net/wireless/iwlegacy/iwl-debugfs.c \
../drivers/net/wireless/iwlegacy/iwl-devtrace.c \
../drivers/net/wireless/iwlegacy/iwl-eeprom.c \
../drivers/net/wireless/iwlegacy/iwl-hcmd.c \
../drivers/net/wireless/iwlegacy/iwl-led.c \
../drivers/net/wireless/iwlegacy/iwl-power.c \
../drivers/net/wireless/iwlegacy/iwl-rx.c \
../drivers/net/wireless/iwlegacy/iwl-scan.c \
../drivers/net/wireless/iwlegacy/iwl-sta.c \
../drivers/net/wireless/iwlegacy/iwl-tx.c \
../drivers/net/wireless/iwlegacy/iwl3945-base.c \
../drivers/net/wireless/iwlegacy/iwl4965-base.c 

OBJS += \
./drivers/net/wireless/iwlegacy/iwl-3945-debugfs.o \
./drivers/net/wireless/iwlegacy/iwl-3945-led.o \
./drivers/net/wireless/iwlegacy/iwl-3945-rs.o \
./drivers/net/wireless/iwlegacy/iwl-3945.o \
./drivers/net/wireless/iwlegacy/iwl-4965-calib.o \
./drivers/net/wireless/iwlegacy/iwl-4965-debugfs.o \
./drivers/net/wireless/iwlegacy/iwl-4965-eeprom.o \
./drivers/net/wireless/iwlegacy/iwl-4965-led.o \
./drivers/net/wireless/iwlegacy/iwl-4965-lib.o \
./drivers/net/wireless/iwlegacy/iwl-4965-rs.o \
./drivers/net/wireless/iwlegacy/iwl-4965-rx.o \
./drivers/net/wireless/iwlegacy/iwl-4965-sta.o \
./drivers/net/wireless/iwlegacy/iwl-4965-tx.o \
./drivers/net/wireless/iwlegacy/iwl-4965-ucode.o \
./drivers/net/wireless/iwlegacy/iwl-4965.o \
./drivers/net/wireless/iwlegacy/iwl-core.o \
./drivers/net/wireless/iwlegacy/iwl-debugfs.o \
./drivers/net/wireless/iwlegacy/iwl-devtrace.o \
./drivers/net/wireless/iwlegacy/iwl-eeprom.o \
./drivers/net/wireless/iwlegacy/iwl-hcmd.o \
./drivers/net/wireless/iwlegacy/iwl-led.o \
./drivers/net/wireless/iwlegacy/iwl-power.o \
./drivers/net/wireless/iwlegacy/iwl-rx.o \
./drivers/net/wireless/iwlegacy/iwl-scan.o \
./drivers/net/wireless/iwlegacy/iwl-sta.o \
./drivers/net/wireless/iwlegacy/iwl-tx.o \
./drivers/net/wireless/iwlegacy/iwl3945-base.o \
./drivers/net/wireless/iwlegacy/iwl4965-base.o 

C_DEPS += \
./drivers/net/wireless/iwlegacy/iwl-3945-debugfs.d \
./drivers/net/wireless/iwlegacy/iwl-3945-led.d \
./drivers/net/wireless/iwlegacy/iwl-3945-rs.d \
./drivers/net/wireless/iwlegacy/iwl-3945.d \
./drivers/net/wireless/iwlegacy/iwl-4965-calib.d \
./drivers/net/wireless/iwlegacy/iwl-4965-debugfs.d \
./drivers/net/wireless/iwlegacy/iwl-4965-eeprom.d \
./drivers/net/wireless/iwlegacy/iwl-4965-led.d \
./drivers/net/wireless/iwlegacy/iwl-4965-lib.d \
./drivers/net/wireless/iwlegacy/iwl-4965-rs.d \
./drivers/net/wireless/iwlegacy/iwl-4965-rx.d \
./drivers/net/wireless/iwlegacy/iwl-4965-sta.d \
./drivers/net/wireless/iwlegacy/iwl-4965-tx.d \
./drivers/net/wireless/iwlegacy/iwl-4965-ucode.d \
./drivers/net/wireless/iwlegacy/iwl-4965.d \
./drivers/net/wireless/iwlegacy/iwl-core.d \
./drivers/net/wireless/iwlegacy/iwl-debugfs.d \
./drivers/net/wireless/iwlegacy/iwl-devtrace.d \
./drivers/net/wireless/iwlegacy/iwl-eeprom.d \
./drivers/net/wireless/iwlegacy/iwl-hcmd.d \
./drivers/net/wireless/iwlegacy/iwl-led.d \
./drivers/net/wireless/iwlegacy/iwl-power.d \
./drivers/net/wireless/iwlegacy/iwl-rx.d \
./drivers/net/wireless/iwlegacy/iwl-scan.d \
./drivers/net/wireless/iwlegacy/iwl-sta.d \
./drivers/net/wireless/iwlegacy/iwl-tx.d \
./drivers/net/wireless/iwlegacy/iwl3945-base.d \
./drivers/net/wireless/iwlegacy/iwl4965-base.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/iwlegacy/%.o: ../drivers/net/wireless/iwlegacy/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


