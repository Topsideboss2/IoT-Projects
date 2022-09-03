//C++ Code
//
int potValue;
int brightness;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  potValue = analogRead(A0);
  brightness = map(potValue,0,1023,0,255);
  digitalWrite(7, brightness);
}
