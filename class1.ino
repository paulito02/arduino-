//DECLARATION OF PINS
const int tyre1 = 1; //PIN 7 IS CONNECTED TO THE FIRST WHEEL
const int tyre2 = 2;  //PIN 8 IS CONNECTED TO THE SECOND WHEEL
const int tyre3 = 3;  //PIN 9 IS CONNECTED TO THE THIRD WHEEL
const int tyre4 =4;  //PIN 11 IS CONNECTED TO THE FORTH WHEEL
const int enableL = 5; //enable pin for the left wheel
const int enableR = 6;//enable pin for the Right wheel
int wait = 1000; //DELAY FOR 1S
int wait2 =2000; //DELAY FOR 2S

void setup() { //CONFIGURATION OF THE PINS
  // put your setup code here, to run once:
  pinMode (tyre1,OUTPUT); //7 OUTPUT
  pinMode (tyre2,OUTPUT); //8 OUTPUT
  pinMode (tyre3,OUTPUT); //9 OUTPUT
  pinMode (tyre4,OUTPUT); //11 OUTPUT
  pinMode (enableR, OUTPUT);
  pinMode (enableL, OUTPUT);

  digitalWrite (enableR, HIGH) ; //to send 5v to right wheel
  digitalWrite (enableL, HIGH) ; //to send 5v to left 1  
  
  
}



void loop() {  //
  // put your main code here, to run repeatedly:
  
  //TYRE1  TYRE2 TYRE3 TYRE4
  //HIGH     LOW    LOW     HIGH  FORWARD MOVEMENT 
  digitalWrite (tyre1, HIGH) ; //to send 5v to tyre 1 
  digitalWrite (tyre2, LOW) ; //to send 0v to tyre 2
  digitalWrite (tyre3, HIGH) ; //to send 5v to tyre 3 
  digitalWrite (tyre4, LOW) ; //to send 0v to tyre 4

  delay (wait) ; 

  //TYRE1  TYRE2 TYRE3 TYRE4
 // LOW   HIGH LOW HIGH  BACKWARD MOVEMENT

  digitalWrite (tyre1, LOW) ; //to send 0V to tyre 1 
  digitalWrite (tyre2, HIGH) ; //to send 5V to tyre 2
  digitalWrite (tyre3, LOW) ; //to send 0V to tyre 3 
  digitalWrite (tyre4, HIGH) ; //to send 5V to tyre 4

  delay (wait2) ; 
  
  //TYRE1  TYRE2 TYRE3 TYRE4
  //HIGH  LOW LOW HIGH  TURN RIGHt
  
  digitalWrite (tyre1, HIGH) ; //to send 5v to tyre 1 
  digitalWrite (tyre2, HIGH) ; //to send 5v to tyre 2
  digitalWrite (tyre3, LOW) ; //to send 0v to tyre 3 
  digitalWrite (tyre4, LOW) ; //to send 0v to tyre 4

  delay (wait2) ; 

  //TYRE1  TYRE2 TYRE3 TYRE4
  //LOW HIGH  HIGH  LOW TURN LEFT
  digitalWrite (tyre1, LOW) ; //to send 0v to tyre 1 
  digitalWrite (tyre2, HIGH) ; //to send 5v to tyre 2
  digitalWrite (tyre3, HIGH) ; //to send 5v to tyre 3 
  digitalWrite (tyre4, LOW) ; //to send 0v to tyre 4

  delay (wait) ; 
 
}
