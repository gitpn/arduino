int ledPin = 13;
int switchPin = 7;
void setup()
{
 pinMode (ledPin, OUTPUT);
 pinMode (switchPin, INPUT_PULLUP);
}

void loop()
{
if(digitalRead(switchPin)==LOW) {
    flashLed(1000);
}
else{flashLed(100);}
}

void flashLed(int delayPeriod)
{
digitalWrite(ledPin, HIGH);
delay(delayPeriod);
digitalWrite(ledPin,LOW);
delay(delayPeriod);
}
