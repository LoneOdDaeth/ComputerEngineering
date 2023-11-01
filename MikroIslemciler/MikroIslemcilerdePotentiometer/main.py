from time import sleep
from machine import Pin,ADC, PWM

led = PWM(Pin(7))
led.freq(1000)

potantiometer = ADC(26)

while True:
    potantiometer_value = potantiometer.read_u16()
    print(potantiometer_value)
    led.duty_u16(potantiometer_value)
    sleep(0.25)