// Atur sudut
// Dalam program ini servo akan berputar
// pada sudut tertentu sesuai yang dimasukkan
// pada serial monitor.
// by Abdurrachman Mappuji <github.com/mappuji/>
// adapted from BARRAGAN's Sweep <http://barraganstudio.com> 
// This example code is in the public domain.

// Memasukkan pustaka standar dari Arduino
#include <Servo.h>

// Pada pustaka tersebut terdapat kelas Servo
// Kita perlu membuat objeknya terlebih dahulu

Servo servoSaya;  // membuat objek untuk mengendalikan servo
                  // paling banyak untuk UNO dapat membuat 8

int pos = 0,      // variabel untuk menyimpan posisi servo
  pos_lama=0;     // variabel untuk menyimpan posisi servo lama
  
// Pada objek yang telah dibuat perlu didefinisikan
// bagina pin mana yang digunakan
void setup()  // fungsi yang dijalankan sekali untuk persiapan
{
  Serial.begin(9600);   //memulai komunikasi serial
  servoSaya.attach(9);  //mengaitkan pin 9 kepada objek servo
}

void loop()  // fungsi yang dijalankan terus menerus infinite loop
{ 
  pos = Serial.parseInt();  // mengambil data integer dari serial
  if (pos >= 180)           // jika sudut yang dimasukan >= 180
    pos = pos % 180;        // maka yang diambil sisa hasil baginya
  if (pos == 0)             // dengan 180
    pos = pos_lama;
   
  // menampilkan posisi aktual 
  Serial.print("Sudut = ");
  Serial.println(pos);        // menuliskan nilai sudut tersimpan  
  servoSaya.write(pos);
  pos_lama = pos;
  delay(15);
  
  
}



