from machine import Pin
from time import sleep

motion = False

def handle_interrupt(pin):
    global motion
    motion = True
    global interrupt_pin
    interrupt_pin = pin

led = Pin(9, Pin.OUT)
pin = Pin(21, Pin.IN)

pin.irq(trigger=Pin.IRQ_RISING, handler=handle_interrupt)

while True:
    if motion:
        print('Motion detected! Interrupt caused by:', interrupt_pin)
        led.value(1)
        sleep(5)
        led.value(0)
        print('Motion stopped!')
        motion = False