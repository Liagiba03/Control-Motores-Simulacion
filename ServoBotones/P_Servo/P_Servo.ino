#include <Servo.h>

Servo myservo;
int pos =0;
int btnMove =9;
int btnHome = 10;


void setup() {
  pinMode(btnMove, INPUT);
  pinMode(btnHome, INPUT);
  myservo.attach(7);
  myservo.write(90);
}

void loop() {

  if(digitalRead(btnMove)==HIGH){
    myservo.write(140);
  }
  else if(digitalRead(btnHome)==HIGH){
    myservo.write(90);
    }
}
