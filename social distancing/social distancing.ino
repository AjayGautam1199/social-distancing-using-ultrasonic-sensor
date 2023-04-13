
const int trigPin = 4;

const int echoPin = 6;

void setup() {

// initialize serial communication:

Serial.begin(9600);

}

void loop() {

// and the distance result in centimeters:

long duration, cm;

pinMode(trigPin, OUTPUT);

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(20);

digitalWrite(trigPin, LOW);

pinMode(echoPin, INPUT);

duration = pulseIn(echoPin, HIGH);

// convert the time into a distance

cm = (duration);
Serial.print(cm);
// the condition for the distance

if ( cm > 780 && cm < 11000)

{
Serial.println("SAFE DISTANCE");

delay(1000);
}
else
{
Serial.println("N OT SAFE DISTANCE");
delay(1000);
}
}