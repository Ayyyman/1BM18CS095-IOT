void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  int isDark, isMoving;
  
  int analog = analogRead(A0);
  if(analog < 520)
    isDark = 1;
  else
    isDark = 0;
  
  isMoving = digitalRead(2);
  
  if(isMoving==HIGH && isDark==1)
  {
    Serial.println((String)"Look behind you...");
    digitalWrite(13, HIGH);
    digitalWrite(4, HIGH);
  }
   
  else if(isMoving==HIGH && isDark==0)
  {
    Serial.println("You've Got Company");
    digitalWrite(13, HIGH);
  }  
  
  else if(isMoving==LOW)
  {
    Serial.println("Sike bruh ur lonely");
    digitalWrite(13, LOW);
  }
  
  delay(2000);
  digitalWrite(4,LOW);
} 
