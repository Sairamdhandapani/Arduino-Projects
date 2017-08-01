/* This code displays the values of Temperature and humidity with delay of 2 seconds.

#include<DHT.h> // Import DHT library

DHT dht (2, DHT11); //DHT pin and DHT type
void setup() {
  Serial.begin(9600); // COM port + Baud Rate
  Serial.print("Check the DHT");
  dht.begin();
}

void loop() {

  delay(2000);
  float humidity = dht.readHumidity(); //
  float temperature = dht.readTemperature();

  Serial.print("\n Humidity =");
  Serial.print(humidity);
  Serial.print("% \n");
  Serial.print("Temperature =");
  Serial.print(temperature);
  Serial.print(" *C");
  //condition check and display on Serial Monitor[Ctrl + shift+ M]
  if ( temperature < 24 ) { 
    Serial.print(" It's cold");
  }
  else
  {
    Serial.println(" It's warm");
  }

}
