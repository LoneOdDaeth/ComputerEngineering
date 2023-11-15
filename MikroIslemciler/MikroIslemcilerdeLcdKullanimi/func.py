import machine
import time

def read_distance(trig_pin, echo_pin):

    trig = machine.Pin(trig_pin, machine.Pin.OUT)
    echo = machine.Pin(echo_pin, machine.Pin.IN)

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