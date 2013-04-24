################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/misc/eeprom/eeprom_93cx6.c 

OBJS += \
./drivers/misc/eeprom/eeprom_93cx6.o 

C_DEPS += \
./drivers/misc/eeprom/eeprom_93cx6.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/misc/eeprom/%.o: ../drivers/misc/eeprom/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


