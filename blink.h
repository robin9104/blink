#ifndef blink_h
#define blink_h

#include "Arduino.h"

class Blink
{
	public:
		Blink(int pin);
		void on(int msec);
		void off(int msec);
	private:
		int _pin;
};

#endif