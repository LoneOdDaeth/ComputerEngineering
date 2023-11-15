import func
from machine import Pin, I2C,SoftI2C
import time
from lcd_api import LcdApi
from pico_i2c_lcd import I2cLcd

I2C_ADDR = 0x27
totalRows = 2
totalColumns = 16

i2c = SoftI2C(scl=Pin(11), sda=Pin(12), freq=10000) 
lcd = I2cLcd(i2c, I2C_ADDR, totalRows, totalColumns)

trig = 27
echo = 21

while True:
    distance = func.read_distance(27, 21)
    print(distance)
    lcd.clear()
    lcd.putstr(str(distance))
    time.sleep(0.1)