import machine
import utime

# LED'in bağlı olduğu GPIO pini
led_pin = machine.Pin(8, machine.Pin.OUT)

while True:
    # LED'i yak
    led_pin.value(1)
    utime.sleep(1)  # 1 saniye bekle

    # LED'i söndür
    led_pin.value(0)
    utime.sleep(1)  # 1 saniye bekle
