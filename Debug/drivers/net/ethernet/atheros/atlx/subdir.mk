################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/ethernet/atheros/atlx/atl1.c \
../drivers/net/ethernet/atheros/atlx/atl2.c \
../drivers/net/ethernet/atheros/atlx/atlx.c 

OBJS += \
./drivers/net/ethernet/atheros/atlx/atl1.o \
./drivers/net/ethernet/atheros/atlx/atl2.o \
./drivers/net/ethernet/atheros/atlx/atlx.o 

C_DEPS += \
./drivers/net/ethernet/atheros/atlx/atl1.d \
./drivers/net/ethernet/atheros/atlx/atl2.d \
./drivers/net/ethernet/atheros/atlx/atlx.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/ethernet/atheros/atlx/%.o: ../drivers/net/ethernet/atheros/atlx/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


