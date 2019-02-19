################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../chapter1/array.c \
../chapter1/chararry.c \
../chapter1/cpout.c \
../chapter1/fahr.c \
../chapter1/hello.c \
../chapter1/ln.c \
../chapter1/nc.c \
../chapter1/power.c \
../chapter1/sz.c \
../chapter1/wordc.c 

OBJS += \
./chapter1/array.o \
./chapter1/chararry.o \
./chapter1/cpout.o \
./chapter1/fahr.o \
./chapter1/hello.o \
./chapter1/ln.o \
./chapter1/nc.o \
./chapter1/power.o \
./chapter1/sz.o \
./chapter1/wordc.o 

C_DEPS += \
./chapter1/array.d \
./chapter1/chararry.d \
./chapter1/cpout.d \
./chapter1/fahr.d \
./chapter1/hello.d \
./chapter1/ln.d \
./chapter1/nc.d \
./chapter1/power.d \
./chapter1/sz.d \
./chapter1/wordc.d 


# Each subdirectory must supply rules for building sources it contributes
chapter1/%.o: ../chapter1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


