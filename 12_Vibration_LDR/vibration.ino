int motorPin = 3;
int sensorPin = A0;
int threshold = 400;

void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue>=threshold)
  {
    digitalWrite(motorPin,HIGH);
    digitalWrite(4,HIGH);
    Serial.println("Buzz Buzz, its ya boi lightyear");
  }
  else
  {
    digitalWrite(motorPin,LOW);
  }
  delay(1500);
  digitalWrite(4,LOW);
}
