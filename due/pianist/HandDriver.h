// HandDriver.h
#ifndef _HANDDRIVER_h
#define _HANDDRIVER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
#include <Servo.h>

#define SERVOCOUNT 5

enum FingerPosition {	PosMiddle = 1,
						PosUp, 
						PosDown};


class HandDriver
{
 private:
	Servo* servos[SERVOCOUNT];
 public:
	HandDriver();
	void init(unsigned char noOfFirstPin);
	void demo();
	void setFinger(unsigned char fingerNo, FingerPosition position);
        void fingerDown(uint8_t fingerNo);
        void fingerUp(uint8_t fingerNo);
};
#endif

