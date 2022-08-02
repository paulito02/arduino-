int readpin = A3;
float V2=0;
int readval;
int delayTime=500;
void setup() {
pinMode(readpin, INPUT)
serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
readval=analogRead(readpin);  // put your main code here, to run repeat
V2 = (5./1023.)*readval;
serial.println(v2);
delay(delayTime);
}
