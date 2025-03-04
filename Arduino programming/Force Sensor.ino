// C++ code
// Force Sensor
int  sensor=A5, red=8, blue=7, green=6;
void setup()
{
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  int force=analogRead(sensor);
  Serial.println(force);
  if (force>=0 && force<150){
  greenlight();
  }
  if (force>150 && force<=300){
  bluelight();
  }
  if (force>=466);
}
void redlight()
{
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
}
void bluelight()
{
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
}
void greenlight()
{
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
}
