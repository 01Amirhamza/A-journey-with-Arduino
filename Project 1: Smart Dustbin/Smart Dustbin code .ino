// C++ code
// Smart Dustbin
#include<Servo.h>
int distance_Function(int echo ,int trig);
Servo myservo;
int trig=4,echo=5;

void setup()
{
  Serial.begin(9600);
  myservo.attach(8);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop()
{
  if (distance_Function(echo,trig)<120){
  myservo.write(90);
  }
  else {
   myservo.write(0);
  }
  
}
int distance_Function(int echo ,int trig){

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

 int duration=pulseIn(echo,HIGH);
  
 int distance=(0.034*duration)/2;
 return distance;

}