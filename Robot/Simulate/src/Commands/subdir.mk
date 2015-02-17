################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/BasicAutonomous.cpp \
../src/Commands/CloseForkCommand.cpp \
../src/Commands/DriveToAutoZoneCommand.cpp \
../src/Commands/DrivetoAutoZone2Command.cpp \
../src/Commands/MoveForkCommand.cpp \
../src/Commands/MoveSpoolCommand.cpp \
../src/Commands/OpenForkCommand.cpp \
../src/Commands/TankDriveCommand.cpp 

OBJS += \
./src/Commands/BasicAutonomous.o \
./src/Commands/CloseForkCommand.o \
./src/Commands/DriveToAutoZoneCommand.o \
./src/Commands/DrivetoAutoZone2Command.o \
./src/Commands/MoveForkCommand.o \
./src/Commands/MoveSpoolCommand.o \
./src/Commands/OpenForkCommand.o \
./src/Commands/TankDriveCommand.o 

CPP_DEPS += \
./src/Commands/BasicAutonomous.d \
./src/Commands/CloseForkCommand.d \
./src/Commands/DriveToAutoZoneCommand.d \
./src/Commands/DrivetoAutoZone2Command.d \
./src/Commands/MoveForkCommand.d \
./src/Commands/MoveSpoolCommand.d \
./src/Commands/OpenForkCommand.d \
./src/Commands/TankDriveCommand.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\team 4984\Desktop\Repos\4984\Robot/src" -IC:\Users\team 4984/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.1 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


