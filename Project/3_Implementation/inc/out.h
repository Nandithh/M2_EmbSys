/**
 * @file out.h
 * @author Nandith R
 * @brief This is the header file for the program
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef OUT_H
#define OUT_H
#include <Arduino.h>

void setupoutput(byte pin1,byte pin2);
void run(byte pin1,byte pin2);
void stop(byte pin1,byte pin2);

#endif
