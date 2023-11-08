import machine
import time

# Pin tanımları
trig = machine.Pin(27, machine.Pin.OUT)  # GPIO2'ye bağladığınız pin
echo = machine.Pin(21, machine.Pin.IN)   # GPIO3'e bağladığınız pin

def read_distance():
    # Trigger pini 10 mikrosaniye boyunca yüksek yapın
    trig.on()
    time.sleep_us(10)
    trig.off()

    # Echo pininin yükseklik süresini ölçün
    pulse_time = machine.time_pulse_us(echo, 1, 30000)  # 30,000 mikrosaniye (30 ms) sınır süre

    # Sesin hızını hesaplayın (yaklaşık 34300 cm/saniye)
    # Mesafeyi hesaplayın (sesin gidiş-dönüş süresi)
    speed_of_sound = 34300  # cm/s
    distance = (pulse_time / 2) * (speed_of_sound / 1000000)

    return distance

while True:
    distance = read_distance()
    print("Mesafe:", distance, "cm")
    time.sleep(1)  # 1 saniyede bir okuma yap

