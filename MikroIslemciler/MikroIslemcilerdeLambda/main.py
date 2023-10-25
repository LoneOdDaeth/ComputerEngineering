from machine import Timer,Pin

timer = Timer()
isik = Pin(9, Pin.OUT)

timer.init(freq=5, mode=Timer.PERIODIC, callback=lambda t: isik.toggle())