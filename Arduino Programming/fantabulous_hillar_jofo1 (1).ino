// C++ code
//LDR Sensor
int light=8;
void setup()
{
  Serial.begin(9600);
  pinMode(light,OUTPUT);
}
void loop()
{
  int rasistance=analogRead(A5);
  Serial.println(rasistance);
  if(rasistance<400){
    digitalWrite(light,HIGH);
 }
  else{
     digitalWrite(light,LOW);
  }
}