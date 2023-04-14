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
##### 安装arduino(略)
##### 配置ESP32开发资源
1. 启动Arduino IDE。
2. 设置首选项。在弹出的“首选项”对话框中输入附加开发版管理资源网址"https://dl.espressif.com/dl/package_esp32_index.json" 并确认。
3. 选择 “工具” ——>“开发板：Arduino UNO”——>“开发板管理器”，在弹出的“开发板管理器”对话框的搜索栏输入“esp32”,选择新版本。
4. 添加ESP开发板。选择“工具”——>“开发板”在右侧的开发板中选择"WeMos WiFi&Buetooth Battery"开发板。
5. 测试Blink程序（点灯实验）。

[for more reference](https://randomnerdtutorials.com/installing-esp32-arduino-ide-2-0/)