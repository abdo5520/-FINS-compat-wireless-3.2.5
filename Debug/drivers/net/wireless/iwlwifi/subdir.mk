################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/wireless/iwlwifi/iwl-1000.c \
../drivers/net/wireless/iwlwifi/iwl-2000.c \
../drivers/net/wireless/iwlwifi/iwl-5000.c \
../drivers/net/wireless/iwlwifi/iwl-6000.c \
../drivers/net/wireless/iwlwifi/iwl-agn-calib.c \
../drivers/net/wireless/iwlwifi/iwl-agn-lib.c \
../drivers/net/wireless/iwlwifi/iwl-agn-rs.c \
../drivers/net/wireless/iwlwifi/iwl-agn-rx.c \
../drivers/net/wireless/iwlwifi/iwl-agn-rxon.c \
../drivers/net/wireless/iwlwifi/iwl-agn-sta.c \
../drivers/net/wireless/iwlwifi/iwl-agn-tt.c \
../drivers/net/wireless/iwlwifi/iwl-agn-tx.c \
../drivers/net/wireless/iwlwifi/iwl-agn-ucode.c \
../drivers/net/wireless/iwlwifi/iwl-agn.c \
../drivers/net/wireless/iwlwifi/iwl-core.c \
../drivers/net/wireless/iwlwifi/iwl-debugfs.c \
../drivers/net/wireless/iwlwifi/iwl-devtrace.c \
../drivers/net/wireless/iwlwifi/iwl-eeprom.c \
../drivers/net/wireless/iwlwifi/iwl-io.c \
../drivers/net/wireless/iwlwifi/iwl-led.c \
../drivers/net/wireless/iwlwifi/iwl-pci.c \
../drivers/net/wireless/iwlwifi/iwl-power.c \
../drivers/net/wireless/iwlwifi/iwl-scan.c \
../drivers/net/wireless/iwlwifi/iwl-sv-open.c \
../drivers/net/wireless/iwlwifi/iwl-trans-pcie-rx.c \
../drivers/net/wireless/iwlwifi/iwl-trans-pcie-tx.c \
../drivers/net/wireless/iwlwifi/iwl-trans-pcie.c \
../drivers/net/wireless/iwlwifi/iwl-trans.c 

OBJS += \
./drivers/net/wireless/iwlwifi/iwl-1000.o \
./drivers/net/wireless/iwlwifi/iwl-2000.o \
./drivers/net/wireless/iwlwifi/iwl-5000.o \
./drivers/net/wireless/iwlwifi/iwl-6000.o \
./drivers/net/wireless/iwlwifi/iwl-agn-calib.o \
./drivers/net/wireless/iwlwifi/iwl-agn-lib.o \
./drivers/net/wireless/iwlwifi/iwl-agn-rs.o \
./drivers/net/wireless/iwlwifi/iwl-agn-rx.o \
./drivers/net/wireless/iwlwifi/iwl-agn-rxon.o \
./drivers/net/wireless/iwlwifi/iwl-agn-sta.o \
./drivers/net/wireless/iwlwifi/iwl-agn-tt.o \
./drivers/net/wireless/iwlwifi/iwl-agn-tx.o \
./drivers/net/wireless/iwlwifi/iwl-agn-ucode.o \
./drivers/net/wireless/iwlwifi/iwl-agn.o \
./drivers/net/wireless/iwlwifi/iwl-core.o \
./drivers/net/wireless/iwlwifi/iwl-debugfs.o \
./drivers/net/wireless/iwlwifi/iwl-devtrace.o \
./drivers/net/wireless/iwlwifi/iwl-eeprom.o \
./drivers/net/wireless/iwlwifi/iwl-io.o \
./drivers/net/wireless/iwlwifi/iwl-led.o \
./drivers/net/wireless/iwlwifi/iwl-pci.o \
./drivers/net/wireless/iwlwifi/iwl-power.o \
./drivers/net/wireless/iwlwifi/iwl-scan.o \
./drivers/net/wireless/iwlwifi/iwl-sv-open.o \
./drivers/net/wireless/iwlwifi/iwl-trans-pcie-rx.o \
./drivers/net/wireless/iwlwifi/iwl-trans-pcie-tx.o \
./drivers/net/wireless/iwlwifi/iwl-trans-pcie.o \
./drivers/net/wireless/iwlwifi/iwl-trans.o 

C_DEPS += \
./drivers/net/wireless/iwlwifi/iwl-1000.d \
./drivers/net/wireless/iwlwifi/iwl-2000.d \
./drivers/net/wireless/iwlwifi/iwl-5000.d \
./drivers/net/wireless/iwlwifi/iwl-6000.d \
./drivers/net/wireless/iwlwifi/iwl-agn-calib.d \
./drivers/net/wireless/iwlwifi/iwl-agn-lib.d \
./drivers/net/wireless/iwlwifi/iwl-agn-rs.d \
./drivers/net/wireless/iwlwifi/iwl-agn-rx.d \
./drivers/net/wireless/iwlwifi/iwl-agn-rxon.d \
./drivers/net/wireless/iwlwifi/iwl-agn-sta.d \
./drivers/net/wireless/iwlwifi/iwl-agn-tt.d \
./drivers/net/wireless/iwlwifi/iwl-agn-tx.d \
./drivers/net/wireless/iwlwifi/iwl-agn-ucode.d \
./drivers/net/wireless/iwlwifi/iwl-agn.d \
./drivers/net/wireless/iwlwifi/iwl-core.d \
./drivers/net/wireless/iwlwifi/iwl-debugfs.d \
./drivers/net/wireless/iwlwifi/iwl-devtrace.d \
./drivers/net/wireless/iwlwifi/iwl-eeprom.d \
./drivers/net/wireless/iwlwifi/iwl-io.d \
./drivers/net/wireless/iwlwifi/iwl-led.d \
./drivers/net/wireless/iwlwifi/iwl-pci.d \
./drivers/net/wireless/iwlwifi/iwl-power.d \
./drivers/net/wireless/iwlwifi/iwl-scan.d \
./drivers/net/wireless/iwlwifi/iwl-sv-open.d \
./drivers/net/wireless/iwlwifi/iwl-trans-pcie-rx.d \
./drivers/net/wireless/iwlwifi/iwl-trans-pcie-tx.d \
./drivers/net/wireless/iwlwifi/iwl-trans-pcie.d \
./drivers/net/wireless/iwlwifi/iwl-trans.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/wireless/iwlwifi/%.o: ../drivers/net/wireless/iwlwifi/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


