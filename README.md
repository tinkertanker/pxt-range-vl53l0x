# VL53L0X Range Sensor [![Build Status](https://travis-ci.org/Tinkertanker/pxt-range-vl53l0x.svg?branch=master)](https://travis-ci.org/Tinkertanker/pxt-range-vl53l0x)

This is the MakeCode package for the VL53L0X Time-of-Flight Ranging Sensor.

## Hardware Setup
1. Connect SCL, SDA to the breakout board's I2C pins.
2. Connect VCC, GND to the respective pins on the breakout board.

## Blocks
### Initialise sensor
Initialises the ToF Ranging Sensor.

```sig
Rangefinder.init()
```

This block must be placed before the `distance` block.

### Distance
Returns the distance measured by the range finder in millimeters.

```sig
Rangefinder.distance()
```

## License

MIT

## Supported targets

* for PXT/microbit
