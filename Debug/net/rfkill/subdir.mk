################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../net/rfkill/built-in.o \
../net/rfkill/rfkill-regulator.mod.o \
../net/rfkill/rfkill-regulator.o 

C_SRCS += \
../net/rfkill/core.c \
../net/rfkill/input.c \
../net/rfkill/rfkill-gpio.c \
../net/rfkill/rfkill-regulator.c \
../net/rfkill/rfkill-regulator.mod.c 

OBJS += \
./net/rfkill/core.o \
./net/rfkill/input.o \
./net/rfkill/rfkill-gpio.o \
./net/rfkill/rfkill-regulator.o \
./net/rfkill/rfkill-regulator.mod.o 

C_DEPS += \
./net/rfkill/core.d \
./net/rfkill/input.d \
./net/rfkill/rfkill-gpio.d \
./net/rfkill/rfkill-regulator.d \
./net/rfkill/rfkill-regulator.mod.d 


# Each subdirectory must supply rules for building sources it contributes
net/rfkill/%.o: ../net/rfkill/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


