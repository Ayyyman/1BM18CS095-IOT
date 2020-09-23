int ledPin=9;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int analogVal= analogRead(A0);
  int brightness = map(analogVal, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
  Serial.print("Analog:");
  Serial.print(analogVal);
  Serial.print("Brightness:");
  Serial.print(brightness);
  delay(100);
}
