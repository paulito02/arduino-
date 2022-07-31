int yellowled=6;
int redled=9;
int yellowTime=500;
int redTime=500;
int yelloBlink=3;
int redBlink=5

void setup() {
  
  // put your setup code here, to run once:
pinMode(yellowpin, OUTPUT);
pinMode(redled, OUTPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=yellowBlink;j=j+1){
digitalWrite(yellowled, HIGH);
delay(yelloTime);
digitalWrite(yellowled, LOW);
   }
  for(j=1;j<=redBlink;j=j+1){
digitalWrite(redled, HIGH);
delay(redTime);
digitalWrite(redLed, LOW);
delay(redTime);
}

