int motorPin1 = 3;
int motorPin2 = 4;

void setup() {
  Serial.begin(9600); //9600 bits per second
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT); 

}

void moveforward(int speed){
  analogWrite(A0, speed);
  digitalWrite(motorPin1, HIGH); 
  digitalWrite(motorPin2, LOW); 
  
}
void movebackward(int speed){
  analogWrite(A0, speed); 
  digitalWrite(motorPin1, LOW); 
  digitalWrite(motorPin2, HIGH);
//  delay(2000);

//  analogWrite(A0, 130); 
//  delay(2000);
}
    
void loop() {
  delay(4000);
  movebackward(175); 
  delay(2000);
  movebackward(255); 
}
