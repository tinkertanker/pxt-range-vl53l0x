Rangefinder.init()
basic.forever(() => {
    serial.writeNumber(Rangefinder.distance())
    serial.writeString("\r\n")
})
