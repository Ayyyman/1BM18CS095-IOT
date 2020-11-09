int tilt = 2;
int led = 13;

void setup()
{
  pinMode(tilt,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int read;                  // Could specify read=0 or not
  read = digitalRead(tilt);
  Serial.println(read);
  
  if (read==1)
    digitalWrite(led,LOW);   // 1 is low(top)
  else
    digitalWrite(led,HIGH);  // 0 is high(bottom)
} 
