### 电气控制部门
#### [Wemos D1 R32开发板](https://docs.platformio.org/en/latest/boards/espressif32/wemos_d1_uno32.html)
![wemos](https://nshopvn.com/wp-content/uploads/2019/03/so-do-chan-arduino-wifi-wemos-d1-r32-esp32-ble-9pcv-1.jpg)

1. 处理芯片。ESP32-DOWQ6,内置两个Xtensa,32bit LX6 MCU 集成4MB SPI Flash.
2. 内存。ROM448KB，SRAM520KB。
3. 时钟频率。80～240MHz。
4. 支持输出。电容式触摸传感器、霍尔传感器、低噪声传感放大器件、SD卡接口、以太网接口、高速SDIO、SPI、UART、I2C和电机控制、超声波舵机。
5. 下载接口。Micro USB。
6. 支持输入。模拟输入（3.2V 最大输入）。
7. 支持编程。 支持C/C++、兼容Arduino IDE、MicroPython、Mixly、Mblock等图形化。
8. 供电方式。DC6——9V。

#### 一、arduino开发
##### 安装arduino(略)&配置ESP32开发资源
1. 启动Arduino IDE。
2. 设置首选项。在弹出的“首选项”对话框中输入附加开发版管理资源网址"https://dl.espressif.com/dl/package_esp32_index.json" 并确认。
3. 选择 “工具” ——>“开发板：Arduino UNO”——>“开发板管理器”，在弹出的“开发板管理器”对话框的搜索栏输入“esp32”,选择新版本。
4. 添加ESP开发板。选择“工具”——>“开发板”在右侧的开发板中选择"WeMos WiFi&Buetooth Battery"开发板。
5. 测试Blink程序（点灯实验）。

[for more reference](https://randomnerdtutorials.com/installing-esp32-arduino-ide-2-0/)
##### 蓝牙控制LED(测试)
1. 蓝牙控制类库。Arduino蓝牙控制类库是BluetoothSerial类库，它帮助建立一个移动终端连接Esp32的UART口，便于移动终端与Esp32的数据传输。BluetoothSerial类库类似Serial类库简化版，只含数据的读写，该类库包括begin()、pinCode()、read()、write()和available()等函数。
2. 蓝牙设备初始化。初始化并设定蓝牙名称函数如下：
`
BluetoothSerial.begin(localname);
`
其中，localname 为蓝牙设备名称，字符串。返回值为(bool)型，True表示初始化成功，False表示初始化不成功。
3. 设定蓝牙设备配对密码。函数如下：
`
BluetoothSerial.pinCode(pwd);
`
其中，pwd为密码字符串，长度1～16位。返回值为布尔型，True表示设置成功，False表示设置失败。
4. 发送单个数据。函数如下
`
BluetoothSerial.write();
`
5. 返回接收数据数量。返回接收缓冲区接收到的字节数据量的函数如下：
`
BluetoothSerial.available()
`
返回值为整数，为接收缓冲区的字节数。
6. 从缓冲区读取数据函数如下：
`
BluetoothSerial.read()
`
该函数读取缓冲区一个字节数据，每读一个字节，就从缓冲区移除一个字节数据。返回值为进入接收缓冲区的第一个字节数据。

程序见测试目录

#### 二、MicroPython开发
##### [MicroPython](https://micropython.org/)
1. 简介
MicroPython是Python3编程语言的一个完整软件实现，包括Python标准库的一小部分，经过优化可在微控制器和受限环境中运行。Pyboard是官方提供的运行MicroPython的电子电路板，它可以运行MicroPython。
MicroPython用C语言编写，被优化运行在微控制器之上，是运行在微控制器硬件之上的完全的Python编译器和运行实时系统。MicroPython提供用户一个交互式提示符（REPL）来立即执行所支持命令。除包含核心Python库，还包括了给予编程者访问底层硬件的模块。
MicroPython包括许多先进的功能，如交互提示、任意精度整数、闭包、列表理解、生成器、异常处理等。而且解构紧凑，只需256KB的代码空间和16kb的内存就可以运行。
**MicroPython努力与普通Python尽可能兼容，这样用户了解Python就可以了解MicroPython。另一方面，对MicroPython越了解，在Python中的表现越好。**
MicroPython保留了Python的特点（脚本语言、语法简洁、使用简单、功能强大、易于扩展、开源且技术支持强大、封装大量库、网络功能和计算功能较强、方便和其他语言配合使用，开发自己的库），一些常用的库封装到了MicroPython中，包括部分传感器、组件、驱动，用户调用相关函数，就可实现LED控制、PWM控制、ADC/DAC控制，使用UART、SPI、I2C，与外部设备交换数据，读写传感器数据等。MicroPython降低了开发难度，且减少大量重复劳动，可以加快开发速度，提高开发效率。

2. 适用硬件
MicroPython最早应用于STM32F4微控制器，目前可以在多种嵌入式硬件平台上运行，包括STM32L4、STM32F7、ESP8266、CC3200、MSP432、XMC4700、RT8195等

3. 特点
MicroPython为嵌入式开发带来一种新的编程方式和思维，就像以前嵌入式开发人员从汇编语言进入C语言开发一样。使用MicroPython的目的不是要取代C语言，而是让开发人员可以将重点放在应用层的开发上，不必再从底层开始构建系统，从应验验证的硬件系统和软件架构开始设计，减少底层硬件设计和软件调试的时间，提高开发效率。降低了嵌入式开发者的门槛，提高硬件选择范围（从51系列开始入门过度到STM32再到系统级别的应用）。使得具备一定软硬件调试手段的初级程序员就可以入门中高级软硬件系统开发项目：网络应用、物联网应用、机器人应用等等。

MicroPython的特点是简单易用、移植好、程序便于维护、但采用MicroPython和其他脚本语言（java、javascript）开发的程序，其运行效率低。然而，目前随着硬件研发水平的提升ISP、 Flash等片上技术的提升，牺牲一部分的芯片资源以换取开发效率的提升是一件值得尝试的事情。（也许困难总是暂时的，办法总比问题多是应该相信的）

正如Arduino将一般电子技术人员、创客带入了嵌入式开发，让他们勇于尝试硬件开发和应用，那么MicroPython也完全可以作为一种工具，用以开发实用产品，让普通爱好者尝试快速原型开发的乐趣。俗语说：“一枝独秀不是春，百花齐放满园春。”像Arduino、MicroPython、 Espruino、mblock、Mixly、Scratch等这样的环境越来越多，开发者们也许要面临着选择困难的幸福了呢！！


##### [开发准备(快速)](https://docs.micropython.org/en/latest/esp8266/quickref.html)
1. [下载固件](https://micropython.org/download/#esp8266)
2. 安装工具`pip install esptool`
3. 擦除flash内存 `esptool.py --port /dev/ttyUSB0 erase_flash`
4. 部署固件` esptool.py --port /dev/ttyUSB0 --baud 460800 write_flash --flash_size=detect 0 esp8266-20170108-v1.8.7.bin` [more reference](https://docs.micropython.org/en/latest/esp8266/tutorial/intro.html#intro)
5. 安装rshell`pip install rshell`并连接REPL。输入指令`rshell --buffer-size 1024 --editor /usr/bin/subl -p /dev/ttyUSB*` [more detail](https://manpages.ubuntu.com/manpages/jammy/en/man1/rshell.1.html)
6. 编辑器编写文件 edit *.py
7. 进入/pyboard环境输入repl cp /（刚编辑的py文件） /pyboard
8. 重启，按下复位键重启

###### PWM控制LED的亮度
将test目录下pwm_led.pay加载到/pyboard目录运行以下命令：
```
>>> from pwm_led import *
>>> pled=PWM_LED(2)
>>> pled.change_duty(0)
>>> pled.change_duty(100)
>>> pled.change_duty(500)
>>> pled.change_duty(800)
>>> pled.change_duty(1023)
>>> pled.deinit()
```
###### 呼吸灯
将test目录下pulse.py加载到/pyboard目录

##### [Thony](https://thonny.org/)开发环境
[For more reference](https://github.com/micropython/micropython/tree/master/ports/esp32) about firmware flash、make、  [origin](https://micropython.org/download/GENERIC_S3/) precise download and flash  [bluetooth application](https://blog.csdn.net/qq_39784672/article/details/119275695)