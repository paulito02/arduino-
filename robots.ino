const int tyrefl = 1;
const int tyrefr = 2;
const int tyrebl = 3;
const int tyrebr = 4;
int delaytime = 2000;
void setup() {
  // put your setup code here, to run once:
pinMode(tyrefl, OUTPUT);
pinMode(tyrefr, OUTPUT);
pinMode(tyrebl, OUTPUT);
pinMode(tyrebr, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tyrefl, HIGH);
digitalWrite(tyrefr, HIGH);
digitalWrite(tyrebl, HIGH);
digitalWrite(tyrebr, HIGH);
}
