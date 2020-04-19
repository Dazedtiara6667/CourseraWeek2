int VoltRead = 12;
int VoltCal;
int LedPin = 10;
int flag = 0;
void setup()
{
  pinMode(LedPin, OUTPUT);
  pinMode(VoltRead, INPUT);
  Serial.begin(9600);
}

void loop()
{
  VoltCal = digitalRead(VoltRead);
  Serial.println(VoltCal);
  if(flag == 0){
    
    if(VoltCal == 0){
      flag = 1;
	  digitalWrite(LedPin, HIGH);
    }
  }
  else if(flag == 1){
    digitalWrite(LedPin, HIGH);
    if(VoltCal == 0){
      flag = 0;
      digitalWrite(LedPin, LOW);
    }
  
  }
  
}