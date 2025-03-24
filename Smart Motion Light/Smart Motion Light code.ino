// C++ code
//PIR Sensor
int relay=8;
int pir=7;
void setup()
{
 Serial.begin(9600);
  pinMode(relay,OUTPUT);
  pinMode(pir,INPUT);
}
void loop()
{
  if(digitalRead(pir)==HIGH){
    digitalWrite(relay,HIGH);
  }
  else{digitalWrite(relay,LOW);}
}