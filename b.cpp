void setup() {

  Serial.begin(9600);
}
void loop() {

  int analogValue = analogRead(A0);

  float akım = analogValue * (5.0 / 1023.0);
 
  Serial.println(akım);

  delay(100);
}
