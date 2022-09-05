int lightpen=A0;
int lightval;
int dv=250;
int redpin=2;
int greenpin=3;
 void setup() {
  // put your setup code here, to run once:

//ohms law is used to detect the current because the higher the light the higher the current the lower the resistor so the sensor resistor + the resistor added will be used and the 5v supplied will be used using ohms law
//PIN 1 is used to supply 5v to the LDR the LDR is connected to the 5k resistor
pinMode(1, OUTPUT);
//pin 13 is set as 0 to get feedback from the circuit it is place between the LDR and 5k resistor to measure the voltage as we cant get the current directly so we can use ohms law to calculate the current 
pinMode(lightpen, INPUT);
pinMode(redpin, OUTPUT);
pinMode(greenpin, OUTPUT);
Serial.begin(9600);
 }
void loop() {
  // put your main code here, to run repeatedly:
lightval=analogRead(lightpen);
Serial.println(lightval);
delay(dv);
if (lightval>350){
  digitalWrite(greenpin, HIGH);
  digitalWrite(redpin, LOW);
}
if (lightval<350){
  digitalWrite(redpin, HIGH);
  digitalWrite(greenpin, LOW);
  
}
}
