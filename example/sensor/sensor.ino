void setup() {
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  Serial.print("[SENSOR] ");
  Serial.println(analogWrite(3));
  delay(1000);
  
}
