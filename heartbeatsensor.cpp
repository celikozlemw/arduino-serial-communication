void setup() {

Serial.begin(9600);
pinMode(10,INPUT); //Lo+
pinMode(11,INPUT);//Lo-
}

void loop() {


Serial.println(analogRead(A0));
delay(10);
}
