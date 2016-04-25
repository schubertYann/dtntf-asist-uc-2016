/*
Buzzer dengan mengatur frekuensi.

Catatan:
Duty Cycle 50%
Dari https://www.arduino.cc/en/Reference/Tone
Board	              Min frequency (Hz)	Max frequency (Hz)
Uno, Mega Like  	  31	                      65535
Gemma	                Not implemented	          Not implemented
Zero	                  41	                      275000
Due	                Not implemented	          Not implemented
*/
const int buzzPin = 9;  //konstanta untuk menentukan pin buzzer

void setup()
{
  pinMode(buzzPin, OUTPUT); //menjadikan pin buzzer sebagai output
}

int frekuensi = 1000; //mengatur duty cycle dalam Hz

void loop()
{
  tone(buzzPin, frekuensi); //memutar tone buzzer
}
