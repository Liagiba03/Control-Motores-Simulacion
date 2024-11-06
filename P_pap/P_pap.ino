#include <Stepper.h>
int stepperRevolution = 2048;
int motSpeed = 12;
Stepper myStepper(stepperRevolution,8,10,9,11);
int dt = 1500;

 void setup() {
  myStepper.setSpeed(motSpeed);
}

void loop() {
  myStepper.step(stepperRevolution);
  delay(dt);
  myStepper.step(-stepperRevolution);
  delay(dt);
}
