/*This project explains using Arduino as a car Parking Sensor*/
/*Ultrasonic Sesnor HC-SR04 is used.*/
/*Vcc- 5V, Trigger Pin - Pin4, Echo Pin- Pin3, GND- GND*/
/*If the car is near to to distance of 20cm , RED LED glows,
   If the car is in range of 20- 200cm, GREEN LED glows,
   For range about 200cm, YELLOW LED glows.
*/
#define trigpin 4
#define echopin 3
#define greenpin 6
#define bluepin 10
#define redpin 11

long duration, distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}
void reverse()
{
  if (distance < 10)
  {
    /*RED*/analogWrite(redpin, 255); analogWrite(greenpin, 0); analogWrite(bluepin, 0); delay(2000);
  }
  if (distance >= 300 || distance <= 10)
  {
    /*GREEN*/analogWrite(redpin, 0); analogWrite(greenpin, 255); analogWrite(bluepin, 0); delay(2000);
  }
  else
  {
    /*BLUE*/analogWrite(redpin, 0); analogWrite(greenpin, 0); analogWrite(bluepin, 255); delay(2000);

  }

  delay(500);
}
void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration / 58.2;
  Serial.print(distance);
  Serial.println("cm");
  reverse();

}


