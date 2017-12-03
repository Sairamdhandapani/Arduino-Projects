/*Higher the voltage value Soil is Dry and Lower the voltage Soil is Wet.*/
int sensor_pin = A0;

void setup()
{

  Serial.begin(9600);
  Serial.println("Reading From the Sensor ...");
  delay(2000);

}

void loop()
{
  int value = analogRead(sensor_pin);
 
  Serial.println(value);
  if ( value < 400)
  {
    Serial.println("Wet Soil");
    digitalWrite (13, LOW);
    delay(2000);
  }
  else
  {
    Serial.println("Dry soil");
    digitalWrite (13, HIGH);
    delay(2000);
  }
}


