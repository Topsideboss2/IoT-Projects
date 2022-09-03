void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int A=analogRead(A0);
  Serial.print("A=");
  Serial.println(A);
  int B=map(A,0,255,0,1);
  digitalWrite(5, B);
  if (B==1)
    digitalWrite(3,HIGH);
  else
    digitalWrite(3,LOW);
  delay(200);
}
