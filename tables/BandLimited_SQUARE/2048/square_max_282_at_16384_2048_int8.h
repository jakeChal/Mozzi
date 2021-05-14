#ifndef SQUARE_MAX_282_AT_16384_2048INT8_H_
#define SQUARE_MAX_282_AT_16384_2048INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_282_AT_16384_2048_NUM_CELLS 2048
#define SQUARE_MAX_282_AT_16384_2048_SAMPLERATE 2048

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_282_AT_16384_2048_DATA [] = 
{
0, 6, 12, 18, 25, 31, 37, 43, 49, 54, 60, 65, 71, 76, 80, 85, 89, 94, 98, 101, 105, 108, 111, 113, 116, 118, 120, 122, 123, 124, 125, 126, 127, 
127, 127, 127, 127, 126, 126, 125, 124, 123, 122, 121, 120, 119, 117, 116, 115, 113, 112, 110, 109, 108, 107, 105, 104, 103, 102, 101, 100, 100, 99, 98, 98, 
98, 97, 97, 97, 97, 97, 97, 98, 98, 98, 99, 100, 100, 101, 102, 102, 103, 104, 105, 106, 106, 107, 108, 109, 109, 110, 111, 112, 112, 113, 113, 114, 
114, 114, 115, 115, 115, 115, 115, 115, 115, 114, 114, 114, 114, 113, 113, 112, 112, 111, 111, 110, 110, 109, 108, 108, 107, 107, 106, 106, 105, 105, 104, 104, 
103, 103, 103, 103, 102, 102, 102, 102, 102, 102, 102, 102, 102, 103, 103, 103, 104, 104, 104, 105, 105, 106, 106, 107, 107, 107, 108, 108, 109, 109, 110, 110, 
110, 111, 111, 111, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 111, 111, 111, 111, 110, 110, 110, 109, 109, 108, 108, 108, 107, 107, 107, 106, 
106, 106, 105, 105, 105, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 107, 107, 107, 108, 108, 108, 
108, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109, 109, 109, 108, 108, 108, 
107, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 106, 107, 107, 
107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 
108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 
106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 
109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 
106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 
110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 
105, 105, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 
110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 105, 105, 105, 
105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 110, 110, 110, 
110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 
105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 
110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 
106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 
109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 
107, 106, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107, 108, 
108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109, 109, 108, 108, 
108, 108, 107, 107, 107, 106, 106, 106, 105, 105, 105, 105, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 105, 105, 105, 106, 106, 106, 
107, 107, 107, 108, 108, 108, 109, 109, 110, 110, 110, 111, 111, 111, 111, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 111, 111, 111, 110, 110, 
110, 109, 109, 108, 108, 107, 107, 107, 106, 106, 105, 105, 104, 104, 104, 103, 103, 103, 102, 102, 102, 102, 102, 102, 102, 102, 102, 103, 103, 103, 103, 104, 
104, 105, 105, 106, 106, 107, 107, 108, 108, 109, 110, 110, 111, 111, 112, 112, 113, 113, 114, 114, 114, 114, 115, 115, 115, 115, 115, 115, 115, 114, 114, 114, 
113, 113, 112, 112, 111, 110, 109, 109, 108, 107, 106, 106, 105, 104, 103, 102, 102, 101, 100, 100, 99, 98, 98, 98, 97, 97, 97, 97, 97, 97, 98, 98, 
98, 99, 100, 100, 101, 102, 103, 104, 105, 107, 108, 109, 110, 112, 113, 115, 116, 117, 119, 120, 121, 122, 123, 124, 125, 126, 126, 127, 127, 127, 127, 127, 
126, 125, 124, 123, 122, 120, 118, 116, 113, 111, 108, 105, 101, 98, 94, 89, 85, 80, 76, 71, 65, 60, 54, 49, 43, 37, 31, 25, 18, 12, 6, 0, 
-6, -12, -18, -25, -31, -37, -43, -49, -54, -60, -65, -71, -76, -80, -85, -89, -94, -98, -101, -105, -108, -111, -113, -116, -118, -120, -122, -123, -124, -125, -126, -127, 
-127, -127, -127, -127, -126, -126, -125, -124, -123, -122, -121, -120, -119, -117, -116, -115, -113, -112, -110, -109, -108, -107, -105, -104, -103, -102, -101, -100, -100, -99, -98, -98, 
-98, -97, -97, -97, -97, -97, -97, -98, -98, -98, -99, -100, -100, -101, -102, -102, -103, -104, -105, -106, -106, -107, -108, -109, -109, -110, -111, -112, -112, -113, -113, -114, 
-114, -114, -115, -115, -115, -115, -115, -115, -115, -114, -114, -114, -114, -113, -113, -112, -112, -111, -111, -110, -110, -109, -108, -108, -107, -107, -106, -106, -105, -105, -104, -104, 
-103, -103, -103, -103, -102, -102, -102, -102, -102, -102, -102, -102, -102, -103, -103, -103, -104, -104, -104, -105, -105, -106, -106, -107, -107, -107, -108, -108, -109, -109, -110, -110, 
-110, -111, -111, -111, -112, -112, -112, -112, -112, -112, -112, -112, -112, -112, -112, -112, -111, -111, -111, -111, -110, -110, -110, -109, -109, -108, -108, -108, -107, -107, -107, -106, 
-106, -106, -105, -105, -105, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -105, -105, -105, -105, -106, -106, -106, -107, -107, -107, -108, -108, -108, 
-108, -109, -109, -109, -110, -110, -110, -110, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -110, -110, -110, -110, -109, -109, -109, -109, -108, -108, -108, 
-107, -107, -107, -107, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -106, -107, -107, 
-107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, 
-108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, 
-106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, 
-109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, 
-106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, 
-110, -110, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, 
-105, -105, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, 
-110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -105, -105, -105, 
-105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -110, -110, -110, 
-110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, 
-105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, 
-110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, 
-106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, 
-109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, 
-107, -106, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -107, -107, -107, -107, -108, 
-108, -108, -109, -109, -109, -109, -110, -110, -110, -110, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -110, -110, -110, -110, -109, -109, -109, -108, -108, 
-108, -108, -107, -107, -107, -106, -106, -106, -105, -105, -105, -105, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -105, -105, -105, -106, -106, -106, 
-107, -107, -107, -108, -108, -108, -109, -109, -110, -110, -110, -111, -111, -111, -111, -112, -112, -112, -112, -112, -112, -112, -112, -112, -112, -112, -112, -111, -111, -111, -110, -110, 
-110, -109, -109, -108, -108, -107, -107, -107, -106, -106, -105, -105, -104, -104, -104, -103, -103, -103, -102, -102, -102, -102, -102, -102, -102, -102, -102, -103, -103, -103, -103, -104, 
-104, -105, -105, -106, -106, -107, -107, -108, -108, -109, -110, -110, -111, -111, -112, -112, -113, -113, -114, -114, -114, -114, -115, -115, -115, -115, -115, -115, -115, -114, -114, -114, 
-113, -113, -112, -112, -111, -110, -109, -109, -108, -107, -106, -106, -105, -104, -103, -102, -102, -101, -100, -100, -99, -98, -98, -98, -97, -97, -97, -97, -97, -97, -98, -98, 
-98, -99, -100, -100, -101, -102, -103, -104, -105, -107, -108, -109, -110, -112, -113, -115, -116, -117, -119, -120, -121, -122, -123, -124, -125, -126, -126, -127, -127, -127, -127, -127, 
-126, -125, -124, -123, -122, -120, -118, -116, -113, -111, -108, -105, -101, -98, -94, -89, -85, -80, -76, -71, -65, -60, -54, -49, -43, -37, -31, -25, -18, -12, -6, 
 };

#endif