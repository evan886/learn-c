################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../struct/str.vis.c \
../struct/strinit.c 

OBJS += \
./struct/str.vis.o \
./struct/strinit.o 

C_DEPS += \
./struct/str.vis.d \
./struct/strinit.d 


# Each subdirectory must supply rules for building sources it contributes
struct/%.o: ../struct/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


