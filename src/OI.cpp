// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DriveDistanceCommand.h"
#include "Commands/MoveForkCommand.h"
#include "Commands/MoveSpoolCommand.h"
#include "Commands/SetForkInCommand.h"
#include "Commands/SetForkOutCommand.h"
#include "Commands/SetSpool1Command.h"
#include "Commands/SetSpool2Command.h"
#include "Commands/SetSpool3Command.h"
#include "Commands/SetSpool4Command.h"
#include "Commands/TankDriveCommand.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driver = new Joystick(0);
	
	robotOperator = new Joystick(1);
	
	joystickButton6 = new JoystickButton(robotOperator, 1);
	joystickButton6->WhileHeld(new SetForkOutCommand());
	joystickButton5 = new JoystickButton(robotOperator, 1);
	joystickButton5->WhileHeld(new SetForkInCommand());
	joystickButton4 = new JoystickButton(robotOperator, 1);
	joystickButton4->WhileHeld(new SetSpool4Command());
	joystickButton3 = new JoystickButton(robotOperator, 1);
	joystickButton3->WhileHeld(new SetSpool3Command());
	joystickButton2 = new JoystickButton(robotOperator, 1);
	joystickButton2->WhileHeld(new SetSpool2Command());
	joystickButton1 = new JoystickButton(robotOperator, 1);
	joystickButton1->WhileHeld(new SetSpool1Command());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("Tank Drive Command", new TankDriveCommand());

	SmartDashboard::PutData("Set Spool 1 Command", new SetSpool1Command());

	SmartDashboard::PutData("Set Spool 2 Command", new SetSpool2Command());

	SmartDashboard::PutData("Set Spool 3 Command", new SetSpool3Command());

	SmartDashboard::PutData("Set Spool 4 Command", new SetSpool4Command());

	SmartDashboard::PutData("Move Spool Command", new MoveSpoolCommand());

	SmartDashboard::PutData("Move Fork Command", new MoveForkCommand());

	SmartDashboard::PutData("Drive Distance Command", new DriveDistanceCommand());

	SmartDashboard::PutData("Set Fork Out Command", new SetForkOutCommand());

	SmartDashboard::PutData("Set Fork In Command", new SetForkInCommand());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getDriver() {
	return driver;
}

Joystick* OI::getRobotOperator() {
	return robotOperator;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS