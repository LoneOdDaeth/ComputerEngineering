import machine
import time

# LED pinini tanımla
led = machine.Pin(9, machine.Pin.OUT)

# Buton pinini tanımla
button = machine.Pin(22, machine.Pin.IN, machine.Pin.PULL_UP)

# Butona basılıyken LED'i yak
while True:
    # Butonun ayaklarını birbirine dokundurun
    button.value(0)
    time.sleep(0.1)
    # Butona basılıyken LED'i yak
    if button.value() == 0:
        led.on()
    else:
        led.off()
    # Butonun ayaklarını birbirinden ayırın
    button.value(1)
    time.sleep(0.1)
