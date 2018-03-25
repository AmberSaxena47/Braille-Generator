#include <Servo.h>
#include<SoftwareSerial.h>

SoftwareSerial BTSerial(6, 7);
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int d = 700;

void setup() {
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
  myservo5.attach(13);
  myservo6.attach(12);
  myservo1.write(25);
  myservo2.write(80);
  myservo3.write(30);
  myservo4.write(50);
  myservo5.write(40);
  myservo6.write(65);
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("A");
}

char yash[1000];
void loop() {
  int i = 0;
  while (BTSerial.available()) {
    yash[i] = BTSerial.read();
    Serial.println(yash[i]);
    if (yash[i] == 'a' || yash[i] == 'A')
    {
      
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(30);
      myservo4.write(50);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'b' || yash[i] == 'B')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'c' || yash[i] == 'C')
    {
      myservo1.write(45);
      myservo2.write(50);
      myservo3.write(30);
      myservo4.write(50);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'd' || yash[i] == 'D')
    {
     myservo1.write(45);
     myservo2.write(50);
     myservo3.write(30);
     myservo4.write(75);
     myservo5.write(40);
     myservo6.write(65);
       delay(d);
    }
    else if (yash[i] == 'e' || yash[i] == 'E')
    {
       myservo1.write(45);
       myservo2.write(80);
       myservo3.write(30);
       myservo4.write(75);
       myservo5.write(40);
       myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'f' || yash[i] == 'F')
    {
      myservo1.write(45);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'g' || yash[i] == 'G')
    {
      myservo1.write(45);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'h' || yash[i] == 'H')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'i' || yash[i] == 'I')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'j' || yash[i] == 'J')
    {
      myservo1.write(25);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'k' || yash[i] == 'K')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(30);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'l' || yash[i] == 'L')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'm' || yash[i] == 'M')
    {
      myservo1.write(45);
      myservo2.write(90);
      myservo3.write(30);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'n' || yash[i] == 'N')
    {
      myservo1.write(45);
      myservo2.write(50);
      myservo3.write(30);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'o' || yash[i] == 'O')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(30);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'p' || yash[i] == 'P')
    {
      myservo1.write(45);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'q' || yash[i] == 'Q')
    {
      myservo1.write(45);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'r' || yash[i] == 'R')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 's' || yash[i] == 'S')
    {
      myservo1.write(25);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 't' || yash[i] == 'T')
    {
      myservo1.write(25);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == 'u' || yash[i] == 'U')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(30);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(40);
      delay(d);
    }
    else if (yash[i] == 'v' || yash[i] == 'V')
    {
     myservo1.write(45);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(40);
      delay(d);
    }
   
else if (yash[i] == 'w' || yash[i] == 'W')
    {
      myservo1.write(25);
      myservo2.write(50);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(40);
      myservo6.write(40);
      delay(d);
    }
    else if (yash[i] == 'x' || yash[i] == 'X')
    {
      myservo1.write(45);
      myservo2.write(95);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(40);
      delay(d);
    }
    else if (yash[i] == 'y' || yash[i] == 'Y')
    {
      myservo1.write(45);     
      myservo2.write(50);
      myservo3.write(30);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(40);
      delay(d);
    }
    else if (yash[i] == 'z' || yash[i] == 'Z')
    {
      myservo1.write(45);
      myservo2.write(80);
      myservo3.write(30);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(40);
      delay(d);
    }
    else if (yash[i] == '?')
    {
      myservo1.write(25);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(60);
      myservo6.write(40);
      delay(d);
    }
    else if (yash[i] == '!')
    {
      myservo1.write(25);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(75);
      myservo5.write(60);
      myservo6.write(65);
      delay(d);
    }
    else if (yash[i] == ',')
    {
      myservo1.write(25);
      myservo2.write(80);
      myservo3.write(50);
      myservo4.write(50);
      myservo5.write(40);
      myservo6.write(65);
      delay(d);    }
    else if (yash[i] == '.')
    {
      myservo1.write(25);
    myservo2.write(80);
      myservo3.write(50);
     myservo4.write(75);
    myservo5.write(40);
    myservo6.write(40);
      delay(d);
    }
    i++;
    delay(2000);

  /*  myservo1.write(0);
    myservo2.write(0);
    myservo3.write(0);
    myservo4.write(0);
    myservo5.write(0);
    myservo6.write(0);
    */

  }
}

