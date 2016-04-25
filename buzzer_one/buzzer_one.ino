/*
Buzzer dengan mengatur duty cycle PWM.

Catatan:
Dari https://www.arduino.cc/en/Reference/AnalogWrite
The frequency of the PWM signal on most pins is approximately 490 Hz.
On the Uno and similar boards,
pins 5 and 6 have a frequency of approximately 980 Hz.
Pins 3 and 11 on the Leonardo also run at 980 Hz.
*/
const int buzzPin = 9;  //konstanta untuk menentukan pin buzzer

void setup()
{
  pinMode(buzzPin, OUTPUT); //menjadikan pin buzzer sebagai output
}

int dutyCyle = 10; //mengatur duty cycle

void loop()
{
  analogWrite(buzzPin, dutyCyle);
}
