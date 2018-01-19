#include "Timer.h"

Timer t;

int trig = 12;
int echo = 11; 

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT); 
  
  t.pulse(trig, 2, );
  t.pulse(echo, 7, );
}
 
 
void loop()
{
  t.update();
}
 
 
void takeReading()
{
  Serial.println(analogRead(0));
}
