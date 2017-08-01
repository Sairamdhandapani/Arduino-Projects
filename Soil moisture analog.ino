int sensor_pin = A0;
//int output_value ;
void setup()
{

  Serial.begin(9600);
  Serial.println("Reading From the Sensor ...");
  delay(2000);

}

void loop()
{
  int value = analogRead(sensor_pin);
  //value = value / 10;
  Serial.println(value);
  if ( value < 400)
  {
    Serial.println("turn off pump");
    digitalWrite (13, LOW);
    delay(2000);
  }
  else
  {
    Serial.println("turn on pump");
    digitalWrite (13, HIGH);
    delay(2000);
  }
}


