
//NOTE: program, make sure #define DEBUG is stated before #include "Debug.h"

#ifndef DEBUG_H
#define DEBUG_H
  #ifdef DEBUG
    #include <Arduino.h> //Arduino.h is only needed when printing in cpp files (ino files don't need this include)
    #define DEBUG_BEGIN(x)      Serial.begin(x)
    #define DEBUG_PRINT(x)      Serial.print (x)
    #define DEBUG_PRINTDEC(x)   Serial.print (x, DEC)
	  #define DEBUG_PRINTHEX(x)   Serial.print (x, HEX)
	  #define DEBUG_PRINTBIN(x)   Serial.print (x, BIN)
    #define DEBUG_PRINTLN(x)    Serial.println (x)
  #else
    #define DEBUG_BEGIN(x)
    #define DEBUG_PRINT(x)
    #define DEBUG_PRINTDEC(x)
	  #define DEBUG_PRINTHEX(x)
	  #define DEBUG_PRINTBIN(x)
    #define DEBUG_PRINTLN(x) 
  #endif
#endif
