// C++ code
//RGB LED Blinking
int red=7,blue=6,green=5;
void setup()
{
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 pinMode(green,OUTPUT);
}

void loop()
{
 rgb_blinking();
}
void rgb_blinking()
{
 digitalWrite(red,HIGH);
 delay(1000);
 digitalWrite(red,LOW);
 delay(1000);
  
 digitalWrite(blue,HIGH);
 delay(1000);
 digitalWrite(blue,LOW);
 delay(1000);
  
 digitalWrite(green,HIGH);
 delay(1000);
 digitalWrite(green,LOW);
 delay(1000);
}