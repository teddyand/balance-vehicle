import machine
import utime,math
from pwm_led import *
from machine import Pin
pwm_led = PWM_LED(2)
def pulse(switch,period,gears):
    #呼吸灯核心代码
    #借用 sin正弦函数，将pwm范围控制在23～1023
    #switch开关对象
    #period呼吸一次的周期，单位为毫秒
    #gears呼吸过程中经历的亮度档位
    for i in range(2*gears):
        switch.change_duty(int(math.sin(i/gears*math.pi)*500)+523)
        #延时
        utime.sleep_ms(int(period/(2*gears)))
#呼吸十次
for i in range(10):
    pulse(pwm_led,2000,100)
#释放资源
pwm_led.deinit()  