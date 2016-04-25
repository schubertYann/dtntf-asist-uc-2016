// Wire Slave Sender
// komentar diterjemahkan oleh Abdurrachman Mappuji
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Sends data as an I2C/TWI slave device
// Refer to the "Wire Master Reader" example for use with this

// Created 29 March 2006

// This example code is in the public domain.

// Pinout
// SDA1 to SDA2
// SCL1 to SCL2
// GNG1 to GND2

#include <Wire.h>

void setup() {
  Wire.begin(8);                // menyambungkan ke i2c bus
                                // dengan alamat 8
  Wire.onRequest(requestEvent); // mendaftarkan event pemicu
}

void loop() {
  delay(100);
}

// fungsi yang dikerjakan apabila ada request
// fungsi ini didaftarkan pada void setup()
void requestEvent() {
  Wire.write("hello "); // mengirim data 6 bytes atau 6 digit char
                        // sebagaimana yang diminta oleh master
}
