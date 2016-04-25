// I2C Wire Master Reader
// diterjemahkan oleh Abdurrachman Mappuji
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Reads data from an I2C/TWI slave device
// Refer to the "Wire Slave Sender" example for use with this

// Created 29 March 2006

// This example code is in the public domain.

// Pinout
// SDA1 to SDA2
// SCL1 to SCL2
// GNG1 to GND2


#include <Wire.h>

void setup() {
  Wire.begin();        // menyambungkan ke i2c bus
                       // alamat dari master tidak wajib
  Serial.begin(9600);  // memulai komunikasi serial
                       // untuk keluaran ke serial monitor
}

void loop() {
  Wire.requestFrom(8, 6);    // meminta 6 bytes dari slave
                             // dengan alamat 8

  while (Wire.available()) { // slave mungkin tidak mengirim
                             // tunggu sampai slave mengirim
                             // atau data tersedia
    char c = Wire.read();    // terima bytes sebagai char
    Serial.println(c);         // mencetak karakter ke serial
                             // hasil dapat dilihat di serial monitor
  }

  delay(500);
}
