################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../net/bluetooth/hidp/core.c \
../net/bluetooth/hidp/sock.c 

OBJS += \
./net/bluetooth/hidp/core.o \
./net/bluetooth/hidp/sock.o 

C_DEPS += \
./net/bluetooth/hidp/core.d \
./net/bluetooth/hidp/sock.d 


# Each subdirectory must supply rules for building sources it contributes
net/bluetooth/hidp/%.o: ../net/bluetooth/hidp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


