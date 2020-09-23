int buttonPin=2;
int ledPin=13;
int buttonState=0;
void setup()
{
  pinMode(ledPin,OUTPUT); //makes it op
  pinMode(buttonPin,INPUT); //makes it ip
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState== HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
