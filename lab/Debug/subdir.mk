################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arrays.c \
../main.c \
../str_functions.c \
../str_quests.c 

OBJS += \
./arrays.o \
./main.o \
./str_functions.o \
./str_quests.o 

C_DEPS += \
./arrays.d \
./main.d \
./str_functions.d \
./str_quests.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


