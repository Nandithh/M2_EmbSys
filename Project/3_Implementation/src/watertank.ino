/**
 * @file watertank.ino
 * @author Arduino Code for Water tank filler with quality check
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "out.h"
#define mpin1 8  // input pin for motor driver
#define mpin2 9  // input 2 for motor driver
int qualPin = A0;  // value of potentiometer
int qualValue = 0; 
const int topsenPin = 2; // Top water level sensor
int topsenState = 0;  
const int bottomsenPin = 3;  // bottom water level sensor
int bottomsenState = 0;    
const int buzzerPin =  6;  // buzzer pin is configured
const int ledPin1 = 4;  // low level LED is configured
const int ledPin2 =  5; // high level LED is configured
void setup() {
  setupoutput(mpin1,mpin2);
    pinMode(topsenPin, INPUT);
    pinMode(bottomsenPin, INPUT);
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
     pinMode(buzzerPin, OUTPUT);

}

void loop() {
  qualValue = analogRead(qualPin);
   topsenState = digitalRead(topsenPin);
  bottomsenState = digitalRead(bottomsenPin);

/**
 * @brief Construct a new if object
 * 
 */
  if (bottomsenState == HIGH) 
  {
    run(mpin1,mpin2);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }
  if (topsenState == HIGH) {
    stop(mpin1,mpin2);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
  }
    
    /**
     * @brief setting up the value for potentiometer
     * 
     */
  if(qualValue>500)
  {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  
  
}
