int LightPin = A0;
int LightVal;
int RedPin = 13;
void setup()
{
  pinMode(LightPin, OUTPUT);
  pinMode(RedPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 LightVal = analogRead(LightPin);
 Serial.println(LightVal);
  if(LightVal < 10){
    digitalWrite(RedPin, HIGH);
  }
  else{
    digitalWrite(RedPin, LOW);
  }
}