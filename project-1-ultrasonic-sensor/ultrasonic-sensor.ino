 int trigger_pin = 9;
 int echo_pin = 8;

 int green_led = 13;
 int red_led = 12;

 int distance;
 long duration;
 
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);

  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2); //pause program for 2 micro seconds -> 1 seconds = 1000000 micro seconds
  digitalWrite(trigger_pin, HIGH);  // apply 5V to trigger pin
  delayMicroseconds(10); //pause program for 10 micro seconds -> 1 seconds = 1000000 micro seconds
  digitalWrite(trigger_pin, LOW);  // apply 0V to trigger pinSketch uses 3020 bytes (9%) of program storage space. Maximum is 32256 bytes.


  duration = pulseIn(echo_pin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" CM");


  if (distance < 15){
    digitalWrite(red_led, HIGH);   
    digitalWrite(green_led, LOW);   
    Serial.println("Danger");
  }

  else{
    digitalWrite(green_led, HIGH);   
    digitalWrite(red_led, LOW);
    Serial.println("Safe");

  }


  delay(100); // Wait 100ms between readings, If not, Pulse 1 fired → echo received → Distance: 236 CM ✓
//Pulse 2 fired IMMEDIATELY → catches the leftover bounce from Pulse 1 → Distance: 0 CM ✗
//Pulse 3 fired → echo received → Distance: 236 CM ✓

}

