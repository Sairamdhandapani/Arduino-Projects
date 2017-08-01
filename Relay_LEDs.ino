/*Relays are devices which can be used to control large voltage switching.Without relays, handling large voltages and currents 
 * directly through arduino will burn the board.
 * 2- Relay Module, LEDs
 * NC- Normally Close, NO- Normally Open, C- Common Connection
 * C-It is hot as power to the load is connected at this terminal.
 * NO- The circuit is closed until we trigger the state to low in relay.[Acts as switch]
 * NC- It is always in contact with COM, even when relay is not powered.
 * when we trigger the relay it opens the circuit, so the connection is lost.
 */

 #define relay1 4 // Denoting pin 4 of the arduino 
 #define relay2 5 //Denoting pin 5 of the arduino
 void setup() {
  
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
}

void loop() {
  digitalWrite(relay1, LOW); // This will turn ON relay1
  delay(5000); // wait for  5 seconds
  digitalWrite(relay1, HIGH); // this will turn OFF relay1
  digitalWrite(relay2, LOW); // This will turn ON relay2
  delay(5000); // wait for 5 seconds
  digitalWrite(relay2, HIGH); // this will turn OFF relay2
}
