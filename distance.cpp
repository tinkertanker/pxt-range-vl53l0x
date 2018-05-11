#include "pxt.h"
#include "VL53L0X.h"

//% color=65 weight=80
//% icon="\uf546"
namespace Rangefinder {
	MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
	Timer t;
	VL53L0X *ranger;

	/**
	* Initialises the laser rangefinder.
	**/
	//% block="initialise"
	//% blockId=ranger_init
	void init(){
		ranger = new VL53L0X(&i2c, &t);
		ranger->setTimeout(500);
		ranger->setSignalRateLimit(0.1);
	  	// increase laser pulse periods (defaults are 14 and 10 PCLKs)
	  	ranger->setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
	  	ranger->setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);
	}

	/**
	* Returns the distance detected by the rangefinder (in mm).
	**/
	//% block="distance (in mm)"
	//% blockId=ranger_dist_mm
	int distance(){
		return ranger->readRangeSingleMillimeters();
	}
}