int sensor = 3; 
int motorpin1 = 1
int motorpin2 = 2
int sensorValue = 0; 
void setup() {
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
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
  sensorValue = digitalRead(sensor);
  if (sensorValue == LOW){
    digitalWrite(LED_BUILTIN, LOW); 
  }
  else{
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
