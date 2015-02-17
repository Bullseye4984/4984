################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/DriveTrain.cpp \
../src/Subsystems/Fork.cpp \
../src/Subsystems/Spool.cpp 

OBJS += \
./src/Subsystems/DriveTrain.o \
./src/Subsystems/Fork.o \
./src/Subsystems/Spool.o 

CPP_DEPS += \
./src/Subsystems/DriveTrain.d \
./src/Subsystems/Fork.d \
./src/Subsystems/Spool.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\team 4984\Desktop\Repos\4984\Robot/src" -IC:\Users\team 4984/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.1 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


