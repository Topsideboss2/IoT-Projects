// C++ code
//Void setup(mandatory function in arduino) is used to initialize variables, pin modes and start using libraries. It only runs once, after each power up and reset of the arduino.
void setup()
{
  pinMode(2, OUTPUT);//This is to specify that pin 2 is an OUTPUT pin
  pinMode(A0, INPUT);//This is to specify that pin A0 is an INPUT pin
  Serial.begin(9600);//This is to establish serial communication between the devices at 9600 bits per second
}

//Void loop(mandatory function in arduino) is made to run over and over as long as the Maker board is turned on.
void loop()
{
  int A = analogRead(A0);//This initializes an integer A that is read at pin A0
  Serial.print("A=");//This will print "A="
  Serial.println(A);//This will print the value of A and skips a line
  int B = map(A,0,150,1,0);//map function remaps a number from one range to another.
  digitalWrite(2,B);//This will then give an output of either high or low at output 2
}
