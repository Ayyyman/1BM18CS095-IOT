int ldrpin=0;
int ldrvalue=0;
int threshold=500;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  ldrvalue=analogRead(ldrpin);
  Serial.print("LDR Value:");
  Serial.println(ldrvalue);
  delay(100);
  if(ldrvalue<=threshold){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  delay(1000);
}
