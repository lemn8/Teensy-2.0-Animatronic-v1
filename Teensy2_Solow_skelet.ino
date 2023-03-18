/*
 * Teensy2_Solow_skelet.ino
 * Board: Teensy 2.0 
 * Created: 17/March/2023
 * Author: Lemn8.com
 * Inspired by: @onehackerband (youtube)
*/


#include <Servo.h>

Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int led = 11;
int led1 = 5;

int servo0Pin = 0;  //Nek
int servo1Pin = 1;  //Arm
int servo2Pin = 2;  //Mond
int servo3Pin = 3;  //Ogen horizontaal
int servo4Pin = 4;  //Ogen vertikaal

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);

  servo0.attach(servo0Pin);
  servo0.write(10);
  servo1.attach(servo1Pin);
  servo1.write(160);
  servo2.attach(servo2Pin);
  servo2.write(90);
  servo3.attach(servo3Pin);
  servo3.write(75);
  servo4.attach(servo4Pin);
  servo4.write(70);
}

void loop() {
  if (usbMIDI.read()) {
    digitalWrite(led, HIGH);
    delay(10);
    digitalWrite(led, LOW);
    byte type, data1;

    type = usbMIDI.getType();
    data1 = usbMIDI.getData1();

    //Start Nek Triggers---------
    if (data1 == 48) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo0.write(40);
          break;
      }
    }
    if (data1 == 49) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo0.write(35);
          break;
      }
    }
    if (data1 == 50) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo0.write(30);
          break;
      }
    }
    if (data1 == 51) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo0.write(25);
          break;
      }
    }
    if (data1 == 52) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo0.write(10);
          break;
      }
    }

    //Einde Nek Triggers

    //Start Arm Triggers
    if (data1 == 53) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo1.write(25);
          break;
      }
    }
    if (data1 == 54) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo1.write(70);
          break;
      }
    }
    if (data1 == 55) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo1.write(90);
          break;
      }
    }
    if (data1 == 56) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo1.write(105);
          break;
      }
    }
    if (data1 == 57) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo1.write(160);
          break;
      }
    }

    // Star Ogen Triggers
    if (data1 == 58) {
      digitalWrite(led1, HIGH);
    }
    if (data1 == 59) {
      digitalWrite(led1, LOW);
    }
    //Einde Ogen triggers

    //Start Mond Triggers
    if (data1 == 60) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo2.write(140);
          break;
        case usbMIDI.NoteOff:
          servo2.write(90);
          break;
      }
    }
    if (data1 == 61) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo2.write(130);
          break;
        case usbMIDI.NoteOff:
          servo2.write(90);
          break;
      }
    }
    if (data1 == 62) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo2.write(120);
          break;
        case usbMIDI.NoteOff:
          servo2.write(90);
          break;
      }
    }
    if (data1 == 63) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo2.write(110);
          break;
        case usbMIDI.NoteOff:
          servo2.write(90);
          break;
      }
    }
    if (data1 == 64) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo2.write(100);
          break;
        case usbMIDI.NoteOff:
          servo2.write(90);
          break;
      }
    }
    //Einde Mond Triggers

    //Begin Ogen Horizontaal

    if (data1 == 65) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo3.write(65);
          break;
      }
    }
    if (data1 == 66) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo3.write(70);
          break;
      }
    }
    if (data1 == 67) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo3.write(75);
          break;
      }
    }
    if (data1 == 68) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo3.write(85);
          break;
      }
    }
    if (data1 == 69) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo3.write(90);
          break;
      }
    }
//Einde Ogen horizontaal

//Begine Ogen Vertikaal    

if (data1 == 72) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo4.write(60);
          break;
      }
    }
if (data1 == 73) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo4.write(65);
          break;
      }
    }
if (data1 == 74) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo4.write(70);
          break;
      }
    }
if (data1 == 75) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo4.write(75);
          break;
      }
    }
if (data1 == 76) {
      switch (type) {
        case usbMIDI.NoteOn:
          servo4.write(100);
          break;
      }
    }
  }
}
