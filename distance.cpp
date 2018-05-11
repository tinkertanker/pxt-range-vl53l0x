#include "pxt.h"
#include "VL53L0X.h"

namespace Rangefinder {
	I2C i2c(I2C_SDA0, I2C_SCL0);
	Timer t;
	VL53L0X *ranger;

	//%
	void init(){
		ranger = new VL53L0X(&i2c, &t);
		ranger->init();
		ranger->setTimeout(500);
		ranger->setSignalRateLimit(0.1);
	  	// increase laser pulse periods (defaults are 14 and 10 PCLKs)
	  	ranger->setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
	  	ranger->setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);
	}

	//%
	int distance(){
		return ranger->readRangeSingleMillimeters();
	}
}