
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  float gVal=analogRead(A0);
  if(gVal>200)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  Serial.println((String)"Gas Value: "+gVal);
  delay(1500);
}
