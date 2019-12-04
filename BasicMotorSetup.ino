// Basic Motor Code. This moves the robot forward for three seconds, brakes, and then moves
// backward for three seconds
// Working on getting a switch or button to start the motors so they do not instantly start on 
// upload

// pwmRight refers to pwma on the motor controller, will be used to control right side motors
const int PWM_RIGHT = 10;

// in1Right and in2Right refers to the input for motor on the right 
const int IN_1_RIGHT = 4;
const int IN_2_RIGHT = 7;

// pwmLeft refers to pwmb on the motor controller, will be used to control left side motors
const int PWM_LEFT = 11;

// in1Left and in2Left refers to the inputs for the motor on the left side
const int IN_1_LEFT = 7;
const int IN_2_LEFT = 5;

// stdby refers to the standby pin, should be set HIGH in order for the motors to run
const int STDBY = 2;

void setup() 
{
  // setting the mode of each pin as an output
  pinMode(PWM_RIGHT, OUTPUT);
  pinMode(IN_1_RIGHT, OUTPUT);
  pinMode(IN_2_RIGHT, OUTPUT);
  pinMode(PWM_LEFT, OUTPUT);
  pinMode(IN_1_LEFT, OUTPUT);
  pinMode(IN_2_LEFT, OUTPUT);
  pinMode(STDBY, OUTPUT);
}

void loop() 
{
  delay(10000);
  // setting stdby pin to high so that motors can run
  digitalWrite(STDBY, HIGH);

  // creating a count variable for number of loops
  int numLoops = 0;

  // turning on right side motors in clockwise motion to go forwards, in1Right must be HIGH and in2Right must be LOW
  digitalWrite(IN_1_RIGHT, HIGH);
  digitalWrite(IN_2_RIGHT, LOW);
  // turning on left side motors in clockwise motion to go forwards, in1Left must be HIGH and in2Left must be LOW
  digitalWrite(IN_1_LEFT, HIGH);
  digitalWrite(IN_2_LEFT, LOW);
  // sending pwm at a speed of 125
  analogWrite(PWM_RIGHT, 50);
  analogWrite(PWM_LEFT, 50);
  // waiting 3 seconds
  delay(3000);

  // braking the motors for this in1 and in2 for both the right and the left must be set to HIGH 
  digitalWrite(IN_1_RIGHT, HIGH);
  digitalWrite(IN_2_RIGHT, HIGH);
  digitalWrite(IN_1_LEFT, HIGH);
  digitalWrite(IN_2_LEFT, HIGH);

  // causing motors to turn in counterclockwise motion to go backwards, in1Right must be LOW and in2Right must be HIGH
  digitalWrite(IN_1_RIGHT, LOW);
  digitalWrite(IN_2_RIGHT, HIGH);
  // turning on left side motors in clockwise motion to go backwards, in1Left must be HIGH and in2Left must be LOW
  digitalWrite(IN_1_LEFT, LOW);
  digitalWrite(IN_1_LEFT, HIGH);
  // waiting 3 seconds 
  delay(3000);

  // braking motors again 
  digitalWrite(IN_1_RIGHT, HIGH);
  digitalWrite(IN_2_RIGHT, HIGH);
  digitalWrite(IN_1_LEFT, HIGH);
  digitalWrite(IN_2_LEFT, HIGH);
}
