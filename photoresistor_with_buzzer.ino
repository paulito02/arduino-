int lightPin=A0;
int buzzPin=11;
int lightval;
int dt;
//ldrpin is to send 5v to the ldr
int ldrpin=1;
 void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(buzzPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightval=analogRead(lightPin);
dt=(9./550.)*lightval-(9.*200./550.)+1.;
digitalWrite(buzzPin, HIGH);
delay(dt);
digitalWrite(buzzPin, LOW);
delay(dt);
}
