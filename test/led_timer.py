from machine import Timer,Pin
import utime

def toggle_led(led_pin):
    #led状态反转
    led_pinvalue(not led_pin.value())
    
def led_blink_timed(timer,led_pin,freq)
    ```
    led按照特定频率闪烁
    led闪烁周期 = 1000 ms/ 频率
    状态变换间隔（period）= led闪烁周期/2
    ``` 
    #计算状态变换间隔时间ms
    period = int(0.5*1000/freq)
    #初始化定时器
    #这里时间调用是使用了lambda表达式，因为回调函数需要传入led_pin
    timer.init(period=period,mode=Timer.PERIODIC,callback=lambda t:toggle_led(led_pin))
    
#声明引脚Ｄ2作为led的引脚
led_pin = Pin(2,Pin.OUT)
timer = Timer（1）#创建定时器对象 
led_blink_timed(timer,led_pin,freq=20)