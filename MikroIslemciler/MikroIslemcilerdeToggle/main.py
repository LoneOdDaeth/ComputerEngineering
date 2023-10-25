from machine import Pin, Timer
import time

timer=Timer()
timer1=Timer()
hemserim = Pin(9, Pin.OUT)
hacim = Pin(8, Pin.OUT)

def isik(timer):
    hemserim.toggle()
def isik1(timer1):
    hacim.toggle()

timer.init(freq=9, mode=Timer.PERIODIC,  callback=isik)
# time.sleep(0.5)
timer1.init(freq=9, mode=Timer.PERIODIC,  callback=isik1)
