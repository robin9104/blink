#include "Arduino.h"
#include "blink.h"

Blink::Blink(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Blink::on(int msec)
{
	digitalWrite(_pin, HIGH);
	delay(msec);
}

void Blink::off(int msec)
{
	digitalWrite(_pin, LOW);
	delay(msec);
}
