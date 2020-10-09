void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop()
{
  int temp= analogRead(A0);
  float x = map(temp,31,368,-40,125);
  
  if (x > 70)
  {
    Serial.println("Buzzzz");
    digitalWrite(2, HIGH);
    delay(2000);
    digitalWrite(2, LOW);
  }
  else
    {
      Serial.println("Idle");
    }
  }
