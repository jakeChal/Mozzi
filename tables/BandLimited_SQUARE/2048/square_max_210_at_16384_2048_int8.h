#ifndef SQUARE_MAX_210_AT_16384_2048INT8_H_
#define SQUARE_MAX_210_AT_16384_2048INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_210_AT_16384_2048_NUM_CELLS 2048
#define SQUARE_MAX_210_AT_16384_2048_SAMPLERATE 2048

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_210_AT_16384_2048_DATA [] = 
{
0, 8, 16, 25, 33, 41, 49, 56, 64, 71, 77, 84, 89, 95, 100, 105, 109, 113, 116, 119, 121, 123, 125, 126, 127, 127, 127, 127, 126, 125, 124, 123, 121, 
120, 118, 116, 115, 113, 111, 109, 107, 106, 104, 103, 102, 100, 99, 99, 98, 98, 97, 97, 97, 97, 98, 98, 99, 100, 100, 101, 102, 103, 104, 106, 107, 
108, 109, 110, 111, 112, 112, 113, 114, 114, 114, 115, 115, 115, 115, 115, 114, 114, 113, 113, 112, 112, 111, 110, 109, 109, 108, 107, 106, 106, 105, 104, 104, 
103, 103, 103, 102, 102, 102, 102, 102, 102, 103, 103, 103, 104, 104, 105, 105, 106, 107, 107, 108, 108, 109, 110, 110, 110, 111, 111, 112, 112, 112, 112, 112, 
112, 112, 112, 112, 111, 111, 111, 110, 110, 109, 109, 108, 108, 107, 107, 106, 106, 105, 105, 105, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 105, 105, 
105, 106, 106, 106, 107, 107, 108, 108, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109, 109, 108, 108, 
107, 107, 107, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 109, 110, 
110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 105, 105, 105, 105, 
105, 105, 105, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 
109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 
108, 108, 108, 109, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 
106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 110, 
109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 
107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 
107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 
109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 
106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 
108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 
106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 110, 
109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 
106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 
107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 
109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 105, 105, 105, 105, 
105, 105, 105, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
109, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 107, 107, 107, 108, 
108, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109, 109, 108, 108, 107, 107, 106, 106, 106, 105, 105, 
105, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 105, 105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 111, 112, 112, 112, 112, 112, 
112, 112, 112, 112, 111, 111, 110, 110, 110, 109, 108, 108, 107, 107, 106, 105, 105, 104, 104, 103, 103, 103, 102, 102, 102, 102, 102, 102, 103, 103, 103, 104, 
104, 105, 106, 106, 107, 108, 109, 109, 110, 111, 112, 112, 113, 113, 114, 114, 115, 115, 115, 115, 115, 114, 114, 114, 113, 112, 112, 111, 110, 109, 108, 107, 
106, 104, 103, 102, 101, 100, 100, 99, 98, 98, 97, 97, 97, 97, 98, 98, 99, 99, 100, 102, 103, 104, 106, 107, 109, 111, 113, 115, 116, 118, 120, 121, 
123, 124, 125, 126, 127, 127, 127, 127, 126, 125, 123, 121, 119, 116, 113, 109, 105, 100, 95, 89, 84, 77, 71, 64, 56, 49, 41, 33, 25, 16, 8, 0, 
-8, -16, -25, -33, -41, -49, -56, -64, -71, -77, -84, -89, -95, -100, -105, -109, -113, -116, -119, -121, -123, -125, -126, -127, -127, -127, -127, -126, -125, -124, -123, -121, 
-120, -118, -116, -115, -113, -111, -109, -107, -106, -104, -103, -102, -100, -99, -99, -98, -98, -97, -97, -97, -97, -98, -98, -99, -100, -100, -101, -102, -103, -104, -106, -107, 
-108, -109, -110, -111, -112, -112, -113, -114, -114, -114, -115, -115, -115, -115, -115, -114, -114, -113, -113, -112, -112, -111, -110, -109, -109, -108, -107, -106, -106, -105, -104, -104, 
-103, -103, -103, -102, -102, -102, -102, -102, -102, -103, -103, -103, -104, -104, -105, -105, -106, -107, -107, -108, -108, -109, -110, -110, -110, -111, -111, -112, -112, -112, -112, -112, 
-112, -112, -112, -112, -111, -111, -111, -110, -110, -109, -109, -108, -108, -107, -107, -106, -106, -105, -105, -105, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -105, -105, 
-105, -106, -106, -106, -107, -107, -108, -108, -109, -109, -109, -110, -110, -110, -110, -111, -111, -111, -111, -111, -111, -111, -111, -110, -110, -110, -110, -109, -109, -109, -108, -108, 
-107, -107, -107, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -109, -110, 
-110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -105, -105, -105, -105, 
-105, -105, -105, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, 
-109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, 
-108, -108, -108, -109, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, 
-106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -110, 
-109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, 
-107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, 
-107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, 
-109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, 
-106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, 
-109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, 
-108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, 
-106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -110, 
-109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, 
-106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, 
-107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, 
-109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -105, -105, -105, -105, 
-105, -105, -105, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, 
-109, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -107, -107, -107, -108, 
-108, -109, -109, -109, -110, -110, -110, -110, -111, -111, -111, -111, -111, -111, -111, -111, -110, -110, -110, -110, -109, -109, -109, -108, -108, -107, -107, -106, -106, -106, -105, -105, 
-105, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -105, -105, -105, -106, -106, -107, -107, -108, -108, -109, -109, -110, -110, -111, -111, -111, -112, -112, -112, -112, -112, 
-112, -112, -112, -112, -111, -111, -110, -110, -110, -109, -108, -108, -107, -107, -106, -105, -105, -104, -104, -103, -103, -103, -102, -102, -102, -102, -102, -102, -103, -103, -103, -104, 
-104, -105, -106, -106, -107, -108, -109, -109, -110, -111, -112, -112, -113, -113, -114, -114, -115, -115, -115, -115, -115, -114, -114, -114, -113, -112, -112, -111, -110, -109, -108, -107, 
-106, -104, -103, -102, -101, -100, -100, -99, -98, -98, -97, -97, -97, -97, -98, -98, -99, -99, -100, -102, -103, -104, -106, -107, -109, -111, -113, -115, -116, -118, -120, -121, 
-123, -124, -125, -126, -127, -127, -127, -127, -126, -125, -123, -121, -119, -116, -113, -109, -105, -100, -95, -89, -84, -77, -71, -64, -56, -49, -41, -33, -25, -16, -8, 
 };

#endif