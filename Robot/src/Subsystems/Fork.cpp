#include "Fork.h"
#include "../RobotMap.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID
Fork::Fork() : Subsystem("Fork") {
 // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID

 // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
 forkMotor = RobotMap::forkForkMotor;
 forkEncoder = RobotMap::forkForkEncoder;
 limitSwitchOpen = RobotMap::forkLimitSwitchOpen;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

 // Use these to get going:
 // SetSetpoint() -  Sets where the PID controller should move the system
 //                  to
 // Enable() - Enables the PID controller.
}

void Fork::InitDefaultCommand() {
 // Set the default command for a subsystem here.
 //setDefaultCommand(new MySpecialCommand());
 // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
 ResetEncoder();
}

bool Fork::OnTarget(double distance){
 if(forkEncoder->GetDistance()<= distance)
 {
  return true;
 }
 return false;
}
void Fork::ResetEncoder()
{
 forkEncoder->Reset();
}

void Fork::MoveForkMotor(Joystick* joystick)
{
 if(joystick->GetRawAxis(0) <= -0.05)
 {
  if(RobotMap::forkLimitSwitchOpen->Get() == false)
  {
  forkMotor->Set(0);
  }
  else
  {
  forkMotor->Set(joystick->GetRawAxis(0));
  }
 }
 else
 {
 forkMotor->Set(joystick->GetRawAxis(0));
 }
}
