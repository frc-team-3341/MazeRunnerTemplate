// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int leftPin = 0; //confirm with robot chassis
const int rightPin = 1;

// defines variables
long duration;
int distance;

void forward(int secs)
{
  analogWrite(leftPin, .5);
  analogWrite(rightPin, .5);
  delay(secs);
}

void left(int secs)
{
  analogWrite(leftPin, 0);
  analogWrite(rightPin, .5);
  delay(secs);
}

void right(int secs)
{
  analogWrite(leftPin, .5);
  analogWrite(rightPin, 0);
  delay(secs);
}

void back(int secs)
{
  digitalWrite(leftPin, -0.5);
  digitalWrite(rightPin, -0.5);
  delay(secs);
}

void stopDistance(int dist)
{

  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;

  while(distance > dist + 10)
  {
    analogWrite(leftPin, 0.5);
    analogWrite(rightPin, 0.5); 
  }

  analogWrite(leftPin, 0);
  analogWrite(rightPin, 0);   
  
}

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(leftPin, OUTPUT);
pinMode(rightPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}

void loop() {
//PLACE CODE HERE










//PLACE CODE HERE
}
