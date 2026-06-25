#include <Servo.h>

Servo myservo;
int servoPin = 9; //servo is connected to port 9
int potPin = A0; //potentiometer is connected to A0

void setup() {
  // put your setup code here, to run once:

  myservo.attach(servoPin);

} 

void loop() {
  // put your main code here, to run repeatedly:
  
  int reading = analogRead(potPin);
  int angle = map(reading, 0, 1023, 0, 360);
  myservo.write(angle);
}
