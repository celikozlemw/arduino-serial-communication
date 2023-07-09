void setup() {
Serial.begin(9600);
}
void loop() {
int analogValue = analogRead(A3);

  float güç = analogValue * (5.0 / 1023.0) * (5.0 / 1023.0);

  Serial.println(güç);

delay(100);
}
