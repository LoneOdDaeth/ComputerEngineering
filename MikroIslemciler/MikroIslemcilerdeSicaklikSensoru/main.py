import machine
import time

# ADC pin tanımlaması
adc = machine.ADC(26)  # GPIO26'ya bağladığınız pin

while True:
    adc_value = adc.read_u16()  # ADC'den okunan değeri alın
    resistance = (65535 / adc_value) - 1  # Termistör direncini hesaplayın
    temperature = 1 / ((1 / 298.15) + (1 / 3988) * (resistance - 1)) - 273.15  # Sıcaklığı hesaplayın (Kelvin'den dereceye dönüştürün)
    
    print("Sıcaklık: {:.2f} °C".format(temperature))
    time.sleep(2)  # 2 saniyede bir veri okuma yap
