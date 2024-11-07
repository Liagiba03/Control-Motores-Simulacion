#include <Servo.h>

Servo myservo;
int pos =0;

void setup() {
  pinMode(9, INPUT);
  myservo.attach(7);
}

void loop() {
  if(digitalRead(9)==LOW){
    myservo.write(180);
  }
  else{
    myservo.write(0);
    }
}
