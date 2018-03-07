#include "Arduino.h"
#include "blink.h"

Blink::Blink(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Blink::on(int msec)
{
	delay(msec);
	digitalWrite(_pin, HIGH);
}

void Blink::off(int msec)
{
	delay(msec);
	digitalWrite(_pin, LOW);
}