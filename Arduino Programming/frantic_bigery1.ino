// C++ code
//Temperature sensor
int temp_pin=A0;
int piezo=8;
void setup()
{
  Serial.begin(9600);
   pinMode(piezo,OUTPUT);
}
void loop()
{
  int temp=temperature();
  Serial.println(temp);
  if (temp>100 || temp<-0){
  digitalWrite(piezo,HIGH);
  }
  digitalWrite(piezo,LOW);
 
}
int temperature()
{
 int t=analogRead(temp_pin);
  return map(t,20,358,-40,125);
}