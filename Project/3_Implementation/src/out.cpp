/**
 * @file out.cpp
 * @author Nandith R
 * @brief It is program for automatic water tank filler with quality check.
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "out.h"
/**
 * @brief function for setting up output ports
 * 
 * @param pin1 
 * @param pin2 
 */


void setupoutput(byte pin1,byte pin2)
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

/**
 * @brief Function for running the motor
 * 
 * @param pin1 
 * @param pin2 
 */

void run(byte pin1,byte pin2)
{
 digitalWrite(pin1, HIGH);   
 digitalWrite(pin2, LOW);    
}

/**
 * @brief function to stop the motor
 * 
 * @param pin1 
 * @param pin2 
 */

void stop(byte pin1,byte pin2)
{
 digitalWrite(pin1, LOW);                        
 digitalWrite(pin2, LOW);     
}
