// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include <math.h>
#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Joystick.h"

#include "../Commands/TankDriveCommand.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	leftMotor = RobotMap::driveTrainLeftMotor;
	rightMotor = RobotMap::driveTrainRightMotor;
	robotDrive = RobotMap::driveTrainRobotDrive;
	leftMotorEncoder = RobotMap::driveTrainLeftMotorEncoder;
	rightMotorEncoder = RobotMap::driveTrainRightMotorEncoder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new TankDriveCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveTrain::TankDrive(Joystick* joystick){
	TankDrive(joystick->GetRawAxis(1), joystick->GetRawAxis(5));
}

void DriveTrain::TankDrive(float left, float right){
	robotDrive->TankDrive(left, right);
}

bool DriveTrain::OnTarget(double distance){
	if(leftMotorEncoder->GetDistance() >= distance || rightMotorEncoder->GetDistance() >= distance){
		return true;
	}
	return false;
}

void DriveTrain::ResetEncoders()
{
	leftMotorEncoder->Reset();
	rightMotorEncoder->Reset();
}
