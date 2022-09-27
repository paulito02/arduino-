int readPin=2; //to read value from the circuit
int powerPin=1; //to power the circuit with 5vbut you can use your 5v directly from your board
int ledPin=9; //the led to power pin to indicte
int buttonPin; //to assign the read value
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(powerPin, OUTPUT);
pinMode(readPin, INPUT);
pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(powerPin, HIGH);
  buttonPin = digitalRead(readPin);
  Serial.println(buttonPin);
  delay(dt);
  if(buttonPin==1){
    digitalWrite(ledPin,LOW);
  }
if(buttonPin==0){
digitalWrite(ledPin, HIGH);  

}
}
