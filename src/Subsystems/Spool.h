// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef SPOOL_H
#define SPOOL_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Spool: public PIDSubsystem {
 public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* spoolMotor;
	AnalogPotentiometer* analogPotentiometer1;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	void SetSpool1Command();
	void SetSpool2Command();
	void SetSpool3Command();
	void SetSpool4Command();
	void MoveSpoolDown(float input);
	void MoveSpoolUp(float input);

	Spool();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void MoveSpool(Joystick* joystick);
};
#endif
