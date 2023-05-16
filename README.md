

### 电路分析部门

#### esp32主控电路
采用esp32-wroom-32芯片(esp8266暂代)
![esp32-wroom-32](https://img-blog.csdnimg.cn/20190510155112773.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L05haXN1X2t1bg==,size_16,color_FFFFFF,t_70)


#### 循迹电路

#### 轮速调整电路
![分压电路](https://cdn.sparkfun.com/assets/4/0/3/a/e/511948ffce395f7f47000000.png)
Esp32数模转换电路可采样0～1.0v电压，对于超出范围电压需要采用分压电路采样（如上图）

$V_{out}=V_{in}.\frac{R_{2}}{R_{1}+R_{2}}$

$V_{in} = 5V$;  $R_{1} = 20K\Omega$; $R_{2}\in(0...5)K\Omega$;

$V_{out}\in(0...1)V$ ok ok

#### 测速电路
![光耦尺寸图](https://ts1.cn.mm.bing.net/th/id/R-C.878b24971154b6879eb39dd6c8fa702d?rik=ImWI0gxneQc7Cw&riu=http%3a%2f%2fwww.ehaoan.com%2fuploads%2fallimg%2f200408%2f1-20040Q55205292.jpg&ehk=BAD4n%2b49SQ%2fZKqI4o85Qb%2bx573%2bk0m2%2b%2btEa0Bvse3o%3d&risl=&pid=ImgRaw&r=0)

![电路图](https://pic1.zhimg.com/80/v2-ad45477288e95e2b6c8b1d4a47a92390_720w.webp)