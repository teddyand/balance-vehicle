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

#### arduino开发
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