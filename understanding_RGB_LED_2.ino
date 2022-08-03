int redPin=8;
int greenPin=9;
int bluePin=10;
String msg="What colour do you want?"; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
  
}
mycolor=Serial.readString();

if (mycolor=="red"){
digitalWrite(redPin, HIGH);
digitalWrite(greenPin, LOW);
digitalWrite(bluePin, LOW);
}
if (mycolor=="green"){
digitalWrite(redPin, LOW);
digitalWrite(greenPin, HIGH);
digitalWrite(bluePin, LOW);
}
if (mycolor=="blue"){
digitalWrite(redPin, LOW);
digitalWrite(greenPin, LOW);
digitalWrite(bluePin, HIGH);
}
//you can combne colors to get order secondary colors
if (mycolor=="aqua"){
digitalWrite(redPin, LOW);
digitalWrite(greenPin, 255);
digitalWrite(bluePin, 255);
}
