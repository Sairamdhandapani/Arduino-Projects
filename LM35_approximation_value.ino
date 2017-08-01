/*this project explains use of LM35 temperature sensor.
 *It has an output voltage that is proportional to the Celsius temperature.
 *Vcc- 5V, Output- A0, Gnd - Gnd
  */
  void setup() {
  Serial.begin(9600);


}

void loop() {
  float temperature = 0;
  temperature = (5.0 * analogRead(0) * 100.0) / 1024; // Equation to approximately convert analog reading to actual temperature
  Serial.println(temperature);
}
