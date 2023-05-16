## my smart vehicle rudiment

### Cordial cloud I
<img src="https://raw.githubusercontent.com/wiki/teddyand/balance-vehicle/images/6c9990bbb34dbef5195f69ad20ca183b64601277/completeness.jpg" align="left" height="240" width="240" >


中文名称“慈云一号”:采用ATMEG328P-AU主控芯片（arduino uno）3.7V锂电池供电、 配有升压电路、充电电路、电机驱动电路、程序下载电路、蓝牙接口、自动循线接口、超声波测距接口。
采用N20减速电机。具有噪声小、运动灵活、充电方便（使用国产android手机充电器即可）的特点。
并采用多种编程方式：传统[arduinoIDE](https://www.arduino.cc/en/guide/windows)或者[mblock下图形编程方式](https://mblock.makeblock.com/en-us/download/)均可。
先期预实现蓝牙遥控功能，之后实现循迹及车速控制功能，最终期望与大数据云平台连通实现远程遥控定位。

[慈云一号视频](https://mp.weixin.qq.com/s/lyUVf8Sz5LZWG-8bcWuVLQ) 

[参考](https://www.instructables.com/%E8%87%AA%E9%80%A0%E4%BD%A0%E7%9A%84Arduino-UNO%E6%9D%BF/)

After a long time meditation, I give the answer to my repository in which there are 4 branches:
1. master(aa_d):final assembly adaptation deparment(总装适配);
2. ec_d: electronic control department（电气控制）;
3. ca_d: circuit analysis department（电路分析）;
4. ac_d: algorithm control department（算法控制）;

#### 测速模块
![测速模块](https://cbu01.alicdn.com/img/ibank/2019/164/157/10319751461_642346158.310x310.jpg)
![模块安装](https://www.guyuehome.com/Uploads/wp/2020/11/56.png)

**准备一些尼龙柱来固定电路板。尼龙柱的尺寸跟铜柱尺寸相同M3，30CM。也可以顺便买一点尼龙螺丝。**

