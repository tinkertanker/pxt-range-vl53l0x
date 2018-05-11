//% color=65 weight=80
//% icon="\f337"
namespace Rangefinder {

	/**
	* Initialises the rangefinder.
	**/
	//% block="initialise"
	//% blockId=ranger_init shim=Rangefinder::init
	export function init(): void {
		//shim
	}

	/**
	* Returns the distance detected by the rangefinder (in mm).
	**/
	//% block="distance (in mm)"
	//% blockId=ranger_dist_mm shim=Rangefinder::distance
	export function distance() : number {
		//shim
		return 0;
	}
}