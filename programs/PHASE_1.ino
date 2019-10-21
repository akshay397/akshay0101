int sensorPin=A0;
int sensorValue=0;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  if(digitalRead(2)==LOW)
  {
    digitalWrite(3,LOW);
  }
  else
  {
    if(analogRead(A0)>=526)
    {
      while(digitalRead(2)==HIGH) {
        digitalWrite(3,HIGH);
        delay(100);
        digitalWrite(3,LOW);
        delay(100);            
      }
    }
    else
    {
      while(digitalRead(2)==HIGH)
      {
         digitalWrite(3,HIGH);
        delay(500);
         digitalWrite(3,LOW);
        delay(500);
      }
    }
  }
}
        
