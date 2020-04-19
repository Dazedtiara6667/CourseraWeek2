int Pushbutton1 = 13;
int Pushbutton2 = 12;
int RedPin = A0;
int SoundPin = 6;
int ButtonVal1;
int ButtonVal2;
int LedBright = 0;
void setup()
{
  pinMode(Pushbutton1, INPUT);
  pinMode(Pushbutton2, INPUT);
  pinMode(RedPin, OUTPUT);
  pinMode(SoundPin, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  ButtonVal1 = digitalRead(Pushbutton1);
  ButtonVal2 = digitalRead(Pushbutton2);
  Serial.println(ButtonVal1);
  Serial.println(ButtonVal2);
  if(ButtonVal1 == 0){
    LedBright = LedBright + 5 ;
    if(LedBright>=255){
      Serial.println("value exceeded");
      digitalWrite(SoundPin, HIGH);
      delay(500);
      digitalWrite(SoundPin, LOW);
      LedBright = 255;
    }
  }
  else if(ButtonVal2 == 0){
    LedBright = LedBright - 5;
    if(LedBright<=0){
      Serial.println("value cannot be negative");
      digitalWrite(SoundPin, HIGH);
      delay(500);
      digitalWrite(SoundPin, LOW);
      LedBright = 0;
    }
  }
  analogWrite(RedPin, LedBright);
}