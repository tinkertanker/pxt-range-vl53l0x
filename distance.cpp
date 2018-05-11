#include "pxt.h"
#include "VL53L0X.h"

namespace Rangefinder {
	I2C *i2c;
	Timer *t;
	VL53L0X *ranger;

	//%
	void init(){
		i2c = new I2C(I2C_SDA0, I2C_SCL0);
		t = new Timer();
		ranger = new VL53L0X(i2c, t);
		ranger->init();
		ranger->setTimeout(500);
	}

	//%
	int distance(){
		return ranger->readRangeSingleMillimeters();
	}
}