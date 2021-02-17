void setup() {  
  Serial.begin(57600);
}

void loop() {
  int analogValue = analogRead(A0);

  Serial.print("Analog reading = ");
  Serial.print(analogValue);

  bool lightOn = false;
  if(analogValue < 200)
    lightOn = true;

  Serial.print("  -  lightOn = ");
  Serial.print(lightOn);

  Serial.println();

  delay(500);
}
