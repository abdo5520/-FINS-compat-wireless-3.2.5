################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/ethernet/atheros/atl1e/atl1e_ethtool.c \
../drivers/net/ethernet/atheros/atl1e/atl1e_hw.c \
../drivers/net/ethernet/atheros/atl1e/atl1e_main.c \
../drivers/net/ethernet/atheros/atl1e/atl1e_param.c 

OBJS += \
./drivers/net/ethernet/atheros/atl1e/atl1e_ethtool.o \
./drivers/net/ethernet/atheros/atl1e/atl1e_hw.o \
./drivers/net/ethernet/atheros/atl1e/atl1e_main.o \
./drivers/net/ethernet/atheros/atl1e/atl1e_param.o 

C_DEPS += \
./drivers/net/ethernet/atheros/atl1e/atl1e_ethtool.d \
./drivers/net/ethernet/atheros/atl1e/atl1e_hw.d \
./drivers/net/ethernet/atheros/atl1e/atl1e_main.d \
./drivers/net/ethernet/atheros/atl1e/atl1e_param.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/ethernet/atheros/atl1e/%.o: ../drivers/net/ethernet/atheros/atl1e/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


