int LedPin = 6;
int PotCal;
int PotPin = A1;
float LedCal;
void setup()
{
  pinMode(LedPin, OUTPUT);
  pinMode(PotPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 PotCal = analogRead(PotPin);
 LedCal = (255/1023.0)*PotCal;
 analogWrite(LedPin,LedCal);
 Serial.println(LedCal);
}