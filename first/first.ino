//инициализация пинов
int ledPin = 13; //светодиод
int switchPin = 7; //7 пин на плате

void setup()
{
 pinMode (ledPin, OUTPUT);// светодиод как выход
 pinMode (switchPin, INPUT_PULLUP);// 7 пин как вход
 Serial.begin(9600); // установка скорости порта
}

void loop()
{
  //если напряжения на 7 пине нет, то светодиод моргает быстро. провод замкнут
if(digitalRead(switchPin)==LOW) {
    flashLed(100);
    Serial.println("Connected");
}

// если провод разомкнут, на 7 пине есть напряжение, то светодиод моргает медленно
else{flashLed(1000);
Serial.println("Not connected");
}

}

//функция моргания светодиода
void flashLed(int delayPeriod)
{
digitalWrite(ledPin, HIGH);
delay(delayPeriod);
digitalWrite(ledPin,LOW);
delay(delayPeriod);
}
