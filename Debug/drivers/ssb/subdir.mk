################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../drivers/ssb/b43_pci_bridge.o \
../drivers/ssb/built-in.o \
../drivers/ssb/driver_chipcommon.o \
../drivers/ssb/driver_chipcommon_pmu.o \
../drivers/ssb/driver_pcicore.o \
../drivers/ssb/main.o \
../drivers/ssb/pci.o \
../drivers/ssb/pcihost_wrapper.o \
../drivers/ssb/pcmcia.o \
../drivers/ssb/scan.o \
../drivers/ssb/sdio.o \
../drivers/ssb/sprom.o \
../drivers/ssb/ssb.mod.o \
../drivers/ssb/ssb.o 

C_SRCS += \
../drivers/ssb/b43_pci_bridge.c \
../drivers/ssb/driver_chipcommon.c \
../drivers/ssb/driver_chipcommon_pmu.c \
../drivers/ssb/driver_extif.c \
../drivers/ssb/driver_gige.c \
../drivers/ssb/driver_mipscore.c \
../drivers/ssb/driver_pcicore.c \
../drivers/ssb/embedded.c \
../drivers/ssb/main.c \
../drivers/ssb/pci.c \
../drivers/ssb/pcihost_wrapper.c \
../drivers/ssb/pcmcia.c \
../drivers/ssb/scan.c \
../drivers/ssb/sdio.c \
../drivers/ssb/sprom.c \
../drivers/ssb/ssb.mod.c 

OBJS += \
./drivers/ssb/b43_pci_bridge.o \
./drivers/ssb/driver_chipcommon.o \
./drivers/ssb/driver_chipcommon_pmu.o \
./drivers/ssb/driver_extif.o \
./drivers/ssb/driver_gige.o \
./drivers/ssb/driver_mipscore.o \
./drivers/ssb/driver_pcicore.o \
./drivers/ssb/embedded.o \
./drivers/ssb/main.o \
./drivers/ssb/pci.o \
./drivers/ssb/pcihost_wrapper.o \
./drivers/ssb/pcmcia.o \
./drivers/ssb/scan.o \
./drivers/ssb/sdio.o \
./drivers/ssb/sprom.o \
./drivers/ssb/ssb.mod.o 

C_DEPS += \
./drivers/ssb/b43_pci_bridge.d \
./drivers/ssb/driver_chipcommon.d \
./drivers/ssb/driver_chipcommon_pmu.d \
./drivers/ssb/driver_extif.d \
./drivers/ssb/driver_gige.d \
./drivers/ssb/driver_mipscore.d \
./drivers/ssb/driver_pcicore.d \
./drivers/ssb/embedded.d \
./drivers/ssb/main.d \
./drivers/ssb/pci.d \
./drivers/ssb/pcihost_wrapper.d \
./drivers/ssb/pcmcia.d \
./drivers/ssb/scan.d \
./drivers/ssb/sdio.d \
./drivers/ssb/sprom.d \
./drivers/ssb/ssb.mod.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/ssb/%.o: ../drivers/ssb/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


