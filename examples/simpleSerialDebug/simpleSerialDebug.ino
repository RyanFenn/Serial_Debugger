
#define DEBUG //when defined, it prints messages  //Needs to be defined before #include "Debug.h"
#include "Debug.h"  //https://github.com/RyanFenn/Serial_Debugger

unsigned char myCounter; 

void setup() {
  DEBUG_BEGIN(115200); 
  DEBUG_PRINTLN("Hello World");
  myCounter = 0;  
}

void loop() {

  DEBUG_PRINT("myCounter = "); DEBUG_PRINTLN(myCounter); 
  myCounter++; 
  delay(1000); 
}
