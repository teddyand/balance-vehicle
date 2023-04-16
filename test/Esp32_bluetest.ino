#include <BluetoothSerial.h> //包含头文件Bluetoothserial

BluetoothSerial SerialBT; //定义蓝牙设备对象

int led = 2;  //指定LED引脚

void setup() {
  // put your setup code here, to run once:
  PinMode(led,OUTPUT);  //初始化LED
  SerialBT.begin("ESP32LED"); //初始化蓝牙接口
}

void loop() {
  // put your main code here, to run repeatedly:
  if(SerialBT.available())  //判是否有接收到蓝牙数据
  {
    int buf = SerialBT.read();  //蓝牙数据读出到缓冲区
    if(buf == 'a')
    {
      digitalWrite(led,HIGH); //数据为a,点亮LED
    }
    if(buf == 'c')
    {
      digitalWrite(led,LOW);  //数据为C,熄灭LED
    }
  }
}
