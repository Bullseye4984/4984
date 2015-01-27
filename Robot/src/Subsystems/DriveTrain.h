// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVE_TRAIN_H
#define DRIVE_TRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	PIDController* leftMotorPIDController;
	PIDController* rightMotorPIDController;
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* leftMotor;
	SpeedController* rightMotor;
	RobotDrive* robotDrive;
	Encoder* rightMotorEncoder;
	Encoder* leftMotorEncoder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	DriveTrain();
	void InitDefaultCommand();
	void ArcadeDrive(Joystick* joystick);
	void Disable();
	void Enable();
	bool OnTarget();
	void TankDrive(Joystick* joystick);
	void TankDrive(float left, float right);
	void RumbleLeft(Joystick* joystick);
	void RumbleRight(Joystick* joystick);
	void SetSetpoint(double setpoint);
};
#endif
