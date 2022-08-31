/*
  TB6612FNG H-Bridge Demo
  TB6612-Demo.ino
  Demonstrates use of TB6612FNG H-Bridge Motor Controller
  Drives two DC Motors

  DroneBot Workshop 2019
  https://dronebotworkshop.com
*/

int STBY = 10;
// Motor A

int pwmA = 5;
int inA = 2;

// Motor B

int pwmB = 9;
int inB = 7;

// Motor Speed Values - Start at zero

int MotorSpeed1 = 30;
int MotorSpeed2 = 30;

bool direction = false;
void setup()

{

  // Set all the motor control pins to outputs

  pinMode(STBY, OUTPUT);
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(inA, OUTPUT);  
  pinMode(inB, OUTPUT);  
   
}

void loop() {

  digitalWrite(STBY, HIGH);
  
  // Set Motor A forward
  digitalWrite(inA, HIGH);  
 // Set Motor B forward
  digitalWrite(inB, HIGH);
  
  // Set the motor speeds  
  analogWrite(pwmA, MotorSpeed1);
  analogWrite(pwmB, MotorSpeed2);
  
  delay(1500);

  // Set Motor A backward
  digitalWrite(inA, LOW);  
 // Set Motor B backward
  digitalWrite(inB, LOW);
  
  // Set the motor speeds  
  analogWrite(pwmA, MotorSpeed1);
  analogWrite(pwmB, MotorSpeed2);
  delay(1500);

  if( direction==false ){
    turn_I();
  }
  else {
    turn_II();
  }

  direction = !direction;

  //stop the vehicle
  digitalWrite(STBY, LOW);

  delay(1500);
}

void turn_I(){
  //Set Motor A forword
  digitalWrite(inA, HIGH);  
  // Set Motor B backward
  digitalWrite(inB, LOW);

  // Set the motor speeds  
  analogWrite(pwmA, MotorSpeed1);
  analogWrite(pwmB, MotorSpeed2);

  delay(4000);

  // Set Motor A backward
  digitalWrite(inA, LOW);  
  // Set Motor B forward
  digitalWrite(inB, HIGH);

  // Set the motor speeds  
  analogWrite(pwmA, MotorSpeed1);
  analogWrite(pwmB, MotorSpeed2);

  delay(4000);
}

  void turn_II()  {
    // Set Motor A backward
    digitalWrite(inA, LOW);  
    // Set Motor B forward
    digitalWrite(inB, HIGH);

    // Set the motor speeds  
    analogWrite(pwmA, MotorSpeed1);
    analogWrite(pwmB, MotorSpeed2);

    delay(4000);

    //Set Motor A forword
    digitalWrite(inA, HIGH);  
    // Set Motor B backward
    digitalWrite(inB, LOW);

    // Set the motor speeds  
    analogWrite(pwmA, MotorSpeed1);
    analogWrite(pwmB, MotorSpeed2);

    delay(4000);
 }
