################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../factorial.c \
../hello.c \
../p26.c \
../p29.c \
../p34.c \
../p35.c \
../p37.c \
../p37_0.c \
../p41.c \
../p48.c \
../p52.c \
../p54.c \
../p57.c \
../p59.c \
../p60.c \
../p67.c \
../p69dowhile.c \
../struct.c \
../structp79.c 

OBJS += \
./factorial.o \
./hello.o \
./p26.o \
./p29.o \
./p34.o \
./p35.o \
./p37.o \
./p37_0.o \
./p41.o \
./p48.o \
./p52.o \
./p54.o \
./p57.o \
./p59.o \
./p60.o \
./p67.o \
./p69dowhile.o \
./struct.o \
./structp79.o 

C_DEPS += \
./factorial.d \
./hello.d \
./p26.d \
./p29.d \
./p34.d \
./p35.d \
./p37.d \
./p37_0.d \
./p41.d \
./p48.d \
./p52.d \
./p54.d \
./p57.d \
./p59.d \
./p60.d \
./p67.d \
./p69dowhile.d \
./struct.d \
./structp79.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


