// C++ code
//Soil Moisture Sensor
int  red=7, blue=6, green=5;
void setup()
{
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  int moisture=analogRead(A0);
  Serial.println(moisture);
  if (moisture>=0 && moisture<=225){
      redlight();
  }
  if (moisture>225 && moisture<=450){
      bluelight();
  }
  if (moisture>450){
      greenlight();
  }
  
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








