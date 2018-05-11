#include "MicroBit.h"
#include "VL53L0X.h"

I2C i2c(I2C_SDA0, I2C_SCL0);
Timer t;
VL53L0X ranger(&i2c, &t);

int main(){
	ranger.init();
	ranger.setTimeout(500);
	// lower the return signal rate limit (default is 0.25 MCPS)
  	ranger.setSignalRateLimit(0.1);
  	// increase laser pulse periods (defaults are 14 and 10 PCLKs)
  	ranger.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
  	ranger.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);
	while(1){
		printf("dist = %d mm\r\n", ranger.readRangeSingleMillimeters());
	}
}