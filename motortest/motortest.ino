int AIN1 = 4; //connect pin AIN1 on the board to pin4. 
int AIN2 = 8; //connect pin AIN2 on the board to pin4. 
int PWMA = 10; //connect to pin 10
int STBY = 2; //connect to pin2
  


void setup() {
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(STBY, OUTPUT);

  //setting direction of motor (two lines below this)
  digitalWrite(AIN1, HIGH); //writing digital high to pin AIN1
  digitalWrite(AIN2, LOW); //wirint ditial low to pin AIN2
  //to flip direction of rotation, writing HIGH to pin AIN2 and LOW to
  //AIN1 should do the trick.

  
  digitalWrite(STBY, HIGH); //Writing high to standby pin
  

}

void loop() {

  digitalWrite(PWMA, HIGH); //turn motor on
  delay(5000); //for 5 seconds

  digitalWrite(PWMA, LOW); //turn motor off
  delay(5000); //for 5 seconds.

  //NEXT STEPS, VARIBALE SPEED? 
  
  

}
