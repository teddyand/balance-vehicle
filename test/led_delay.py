from machine import Pin
import utime
#构造一个LED对象（P2）
led = Pin(2,Pin.OUT)
#循环10次亮灭过程
for i in range(10):
    #点亮LED
    led.value(1)
    #延时500ms
    utime.sleep_ms(500)
    #熄灭LED
    led.value(0)
    #延时500ms
    utime.sleep_ms(500)