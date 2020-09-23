void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int i=0; i<300; i+=10)
  {
    delay(100);
    analogWrite(9,i);
  }
  for(int i=300; i>0; i-=10)
  {
    delay(100);
    analogWrite(9,i);
  }
}
