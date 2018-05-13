void setup() {
  pinMode(3, OUTPUT);

}

void loop() {
  /*
   * DC Motor digitalWrite
  digitalWrite(3, HIGH);
  */

  // PWM - analogWrite
  for (int i=0; i<255; i++) {
    analogWrite(3, i);
    delay(100);
  }

  for (i=255; i>0; i--) {
    analogWrite(3, i);
    delay(100);
  }
  
}
