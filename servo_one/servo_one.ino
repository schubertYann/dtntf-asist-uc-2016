// Menyapu
// Dalam program ini servo akan berputar
// kemudian akan kembali lagi.
// by Abdurrachman Mappuji <github.com/mappuji/>
// adapted from BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.

// Memasukkan pustaka standar dari Arduino
#include <Servo.h>

// Pada pustaka tersebut terdapat kelas Servo
// Kita perlu membuat objeknya terlebih dahulu

Servo servoSaya;  // membuat objek untuk mengendalikan servo
                  // paling banyak untuk UNO dapat membuat 8

int pos = 0;      // variabel untuk menyimpan posisi servo

// Pada objek yang telah dibuat perlu didefinisikan
// bagina pin mana yang digunakan
void setup()  // fungsi yang dijalankan sekali untuk persiapan
{
  servoSaya.attach(9);  //mengaitkan pin 9 kepada objek servo
}

void loop()  // fungsi yang dijalankan terus menerus infinite loop
{ 
  // menuju ke sudut 180 derajat
  for(pos = 0; pos < 180; pos += 1)
  {
    servoSaya.write(pos);
    delay(15);
  }

  // kembali ke sudut 0 derajat 
  for(pos = 180; pos > 0; pos -= 1)
  {
    servoSaya.write(pos);
    delay(15);
  }
 
  // Keterangan:
  // Kitiran bisa saja tidak tepat lurus
  // saat 0 atau 180 derajat, sehingga untuk itu
  // jika perlu, kalibrasi dapat dilakukan
  // namun jika yang dibutuhkan hanya perubahan sudutnya
  // maka tidak masalah.
}



