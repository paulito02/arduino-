int buttonPin1=0;
int buttonPin2=2;
int power=1;
int val1;
int val2;
int led=3;
int ledBright;
int buzzer=4;
int dt=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(power, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  val1=digitalRead(buttonPin1);
  val2=digitalRead(buttonPin2);
  Serial.print("button 1= ");
  Serial.print(val1);
  Serial.print(", ");
  delay(dt);
  Serial.print("button 2= ");
  Serial.print(val2);
  Serial.print(", ");

  if (val1==0){
    ledBright=ledBright+5;
  }
  if (val2==0){
    ledBright=ledBright-5;
  }
  Serial.println(ledBright);
  if (ledBright>225){
    ledBright=225;
    digitalWrite(buzzer, HIGH);
    delay(dt);
    digitalWrite(buzzer, LOW);
  }
  if (ledBright<0){
    ledBright=0;
    digitalWrite(buzzer, HIGH);
    delay(dt);
    digitalWrite(buzzer, LOW);
  }
  analogWrite(led, ledBright);
}
