void setup()
{
serial.begin(9600);
pinMode(3,OUTPUT)
}
void loop()
{
sensor value=analogRead(sensorPin);
serial.printIn(sensor value);
}