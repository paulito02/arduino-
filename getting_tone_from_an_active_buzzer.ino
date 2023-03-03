int buzzPin = 8;
int dt1 = 1;
int dt2 = 2;
int j;
void setup() {
  // put your setup code here, to run once:
pinMode (buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // the for loop set j to be 1 and also initiate a count from 1 to 100 by adding the initial state by 1 till it gets to 100 the the loop is fa;se and it will break out
for (j=1; j<=100; j=j+1){
  digitalWrite(buzzPin, HIGH);
  delay(dt1);
  digitalWrite(buzzPin, LOW);
  delay(dt1);
}
for (j=1; j<=100; j=j+1){
  digitalWrite(buzzPin, HIGH);
  delay(dt2);
  digitalWrite(buzzPin, LOW);
  delay(dt2);
}
}
