void setup() {
  pinMode(A0, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(A0, HIGH); //high:1
  delay(2000); //2000ms bekle
  digitalWrite(A0, LOW); //low:0
  delay(2000); //2000ms bekle


  int voltaj = analogRead(A0);
  Serial.println(voltaj);
}
