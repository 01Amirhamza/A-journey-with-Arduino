// C++ code
//Motor Control
int p=10, n=11;
void setup()
{
 pinMode(p,OUTPUT);
 pinMode(n,OUTPUT);
}

void loop()
{
   analogWrite(p,255);
   analogWrite(n,0);
   delay(1000);
   
   analogWrite(p,0);
   analogWrite(n,255);
   delay(1000);
}