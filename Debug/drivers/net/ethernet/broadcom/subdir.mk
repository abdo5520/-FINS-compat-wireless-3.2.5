################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/net/ethernet/broadcom/b44.c 

OBJS += \
./drivers/net/ethernet/broadcom/b44.o 

C_DEPS += \
./drivers/net/ethernet/broadcom/b44.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/net/ethernet/broadcom/%.o: ../drivers/net/ethernet/broadcom/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


