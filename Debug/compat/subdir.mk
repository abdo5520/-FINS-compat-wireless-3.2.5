################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../compat/built-in.o \
../compat/compat.mod.o \
../compat/compat.o \
../compat/main.o 

C_SRCS += \
../compat/compat-2.6.14.c \
../compat/compat-2.6.18.c \
../compat/compat-2.6.19.c \
../compat/compat-2.6.21.c \
../compat/compat-2.6.22.c \
../compat/compat-2.6.23.c \
../compat/compat-2.6.24.c \
../compat/compat-2.6.25.c \
../compat/compat-2.6.26.c \
../compat/compat-2.6.27.c \
../compat/compat-2.6.28.c \
../compat/compat-2.6.29.c \
../compat/compat-2.6.32.c \
../compat/compat-2.6.33.c \
../compat/compat-2.6.35.c \
../compat/compat-2.6.36.c \
../compat/compat-2.6.37.c \
../compat/compat-2.6.38.c \
../compat/compat-2.6.39.c \
../compat/compat-3.0.c \
../compat/compat-3.2.c \
../compat/compat.mod.c \
../compat/compat_atomic.c \
../compat/compat_firmware_class.c \
../compat/cordic.c \
../compat/crc8.c \
../compat/kfifo.c \
../compat/kstrtox.c \
../compat/main.c \
../compat/pm_qos_params.c 

OBJS += \
./compat/compat-2.6.14.o \
./compat/compat-2.6.18.o \
./compat/compat-2.6.19.o \
./compat/compat-2.6.21.o \
./compat/compat-2.6.22.o \
./compat/compat-2.6.23.o \
./compat/compat-2.6.24.o \
./compat/compat-2.6.25.o \
./compat/compat-2.6.26.o \
./compat/compat-2.6.27.o \
./compat/compat-2.6.28.o \
./compat/compat-2.6.29.o \
./compat/compat-2.6.32.o \
./compat/compat-2.6.33.o \
./compat/compat-2.6.35.o \
./compat/compat-2.6.36.o \
./compat/compat-2.6.37.o \
./compat/compat-2.6.38.o \
./compat/compat-2.6.39.o \
./compat/compat-3.0.o \
./compat/compat-3.2.o \
./compat/compat.mod.o \
./compat/compat_atomic.o \
./compat/compat_firmware_class.o \
./compat/cordic.o \
./compat/crc8.o \
./compat/kfifo.o \
./compat/kstrtox.o \
./compat/main.o \
./compat/pm_qos_params.o 

C_DEPS += \
./compat/compat-2.6.14.d \
./compat/compat-2.6.18.d \
./compat/compat-2.6.19.d \
./compat/compat-2.6.21.d \
./compat/compat-2.6.22.d \
./compat/compat-2.6.23.d \
./compat/compat-2.6.24.d \
./compat/compat-2.6.25.d \
./compat/compat-2.6.26.d \
./compat/compat-2.6.27.d \
./compat/compat-2.6.28.d \
./compat/compat-2.6.29.d \
./compat/compat-2.6.32.d \
./compat/compat-2.6.33.d \
./compat/compat-2.6.35.d \
./compat/compat-2.6.36.d \
./compat/compat-2.6.37.d \
./compat/compat-2.6.38.d \
./compat/compat-2.6.39.d \
./compat/compat-3.0.d \
./compat/compat-3.2.d \
./compat/compat.mod.d \
./compat/compat_atomic.d \
./compat/compat_firmware_class.d \
./compat/cordic.d \
./compat/crc8.d \
./compat/kfifo.d \
./compat/kstrtox.d \
./compat/main.d \
./compat/pm_qos_params.d 


# Each subdirectory must supply rules for building sources it contributes
compat/%.o: ../compat/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


