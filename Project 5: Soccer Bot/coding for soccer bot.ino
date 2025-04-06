// C++ code
// Coding for Soccer Bot
// Right Motor: Ren 11, Len 12,Rpwm 5, Lpwm 6
// Left Motor: Ren 7, Len 8, Rpwm 9, Lpwm 10

int speeds=100;
char data;
//For Right side
#define rm_ren 11
#define rm_len 12
#define rm_rpwm 5
#define rm_lpwm 6

//For Left side

#define lm_ren 7
#define lm_len 8
#define lm_rpwm 9
#define lm_lpwm 10

void forward();
void backward();
void turn_right();
void turn_left();
void stop();

void setup(){
pinMode(rm_ren,OUTPUT);
pinMode(rm_len,OUTPUT);
pinMode(rm_rpwm,OUTPUT);
pinMode(rm_lpwm,OUTPUT);

pinMode(lm_ren,OUTPUT);
pinMode(lm_len,OUTPUT);
pinMode(lm_rpwm,OUTPUT);
pinMode(lm_lpwm,OUTPUT);
  
Serial.begin(9600);
  
}
void loop()
{
 if(Serial.available()){
 data=Serial.read();
  //Serial.println(data);
   if(data=='0' || data=='1' || data=='2' || data=='3' || data=='4' || data=='5' || data=='6' || data=='7' || data=='8' || data=='9'){
   int value=(int)data;//type casting
   speeds=value*28; //
   }
 
  if(data=='F'){
     forward();
     Serial.println("F");
 }
  if(data=='B'){  
     backward();
     Serial.println("B");
 }
  if(data=='R'){
     turn_right();
     Serial.println("R");
 }
  if(data=='L'){
     turn_left();
     Serial.println("L"); 
 }
  if(data=='S'){
     stop();
     Serial.println("S");
 }
   
}
}

void forward()
{   
digitalWrite(rm_ren,HIGH);
digitalWrite(rm_len,HIGH);
analogWrite(rm_rpwm,speeds);
analogWrite(rm_rpwm,0);
  
digitalWrite(lm_ren,HIGH);
digitalWrite(lm_len,HIGH);
analogWrite(lm_rpwm,speeds);
analogWrite(lm_rpwm,0); 
}

void backward()
{   
digitalWrite(rm_ren,HIGH);
digitalWrite(rm_len,HIGH);
analogWrite(rm_rpwm,0);
analogWrite(rm_rpwm,speeds);
  
digitalWrite(lm_ren,HIGH);
digitalWrite(lm_len,HIGH);
analogWrite(lm_rpwm,0);
analogWrite(lm_rpwm,speeds); 
}
void turn_right()
{   
digitalWrite(rm_ren,HIGH);
digitalWrite(rm_len,HIGH);
analogWrite(rm_rpwm,speeds);
analogWrite(rm_rpwm,0);
  
digitalWrite(lm_ren,HIGH);
digitalWrite(lm_len,HIGH);
analogWrite(lm_rpwm,speeds);
analogWrite(lm_rpwm,0); 
}
void turn_left()
{   
digitalWrite(rm_ren,HIGH);
digitalWrite(rm_len,HIGH);
analogWrite(rm_rpwm,speeds);
analogWrite(rm_rpwm,0);
  
digitalWrite(lm_ren,HIGH);
digitalWrite(lm_len,HIGH);
analogWrite(lm_rpwm,0);
analogWrite(lm_rpwm,speeds); 
}

void stop()
{   
digitalWrite(rm_ren,LOW);
digitalWrite(rm_len,LOW);
  
digitalWrite(lm_ren,LOW);
digitalWrite(lm_len,LOW);
}


















