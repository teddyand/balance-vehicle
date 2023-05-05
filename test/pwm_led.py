from machine import Pin，PWM

class PWM_LED:
    def _init_(self.pinnum,freq=1000):
        pin=Pin(pinnum,Pin.OUT)
        self.pwm=PWM(pin,freq=freq)
    def change_duty(self,duty):
        self.pwm.duty(duty)
    def deinit(self):  
        self.pwm.deinit()