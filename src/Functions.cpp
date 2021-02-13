#include "functions.h"
#include "DriveFunctionsConfig.h"
#include "vex.h"

void testPID()
{
  for(int i = 0; i < 8; i++)
  {
    moveLinear(12, 100);  
    moveRotate(-90, 90);
  }
  //moveStop();
  wait(20, msec); // Sleep the task for a short amount of time t
}


void raiseLift(){
  LiftMotor.spin(directionType::fwd, 100, velocityUnits::pct);
  wait(7000,timeUnits::msec);
  LiftMotor.stop(brakeType::hold);
}

void Score(){
  BeltLeft.spin(directionType::fwd, 100, velocityUnits::pct);
  BeltRight.spin(directionType::fwd, 100, velocityUnits::pct);
  wait(8000, timeUnits::msec);
  BeltLeft.stop(brakeType::coast);
  BeltRight.stop(brakeType::coast);
}