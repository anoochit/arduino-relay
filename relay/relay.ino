/*
  Turns on an relay off and on for each 2 seconds repeatedly.
 */

// Pin 6,7,8,9 has an relay board connected

#define RELAY01 6
#define RELAY02 7
#define RELAY03 8
#define RELAY04 9

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(RELAY01, OUTPUT);
  pinMode(RELAY02, OUTPUT);
  pinMode(RELAY03, OUTPUT);
  pinMode(RELAY04, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(RELAY01, LOW);
  delay(2000);
  digitalWrite(RELAY01, HIGH);
  
  digitalWrite(RELAY02, LOW);
  delay(2000);
  digitalWrite(RELAY02, HIGH);
  
  digitalWrite(RELAY03, LOW);
  delay(2000);
  digitalWrite(RELAY03, HIGH);
  
  digitalWrite(RELAY04, LOW);
  delay(2000);
  digitalWrite(RELAY04, HIGH);
}
