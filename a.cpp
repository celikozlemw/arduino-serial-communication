void setup() {
  pinMode(A1, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  int voltaj = analogRead(A1);
  
  digitalWrite(A1, HIGH); //high:1
  delay(2000); //2000ms bekle
  digitalWrite(A1, LOW); //low:0
  delay(2000); //2000ms bekle

  Serial.println(voltaj);
}
