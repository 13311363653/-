#define NOTE_D0 -1   //音符对应的相应频率
#define NOTE_D1 523  /TE_D表示D调
#define NOTE_D2 587
#define NOTE_D3 659
#define NOTE_D4 698
#define NOTE_D5 784
#define NOTE_D6 880
#define NOTE_D7 988

#define NOTE_DL1 261 /TE_DL表示D调LOW
#define NOTE_DL2 294
#define NOTE_DL3 329
#define NOTE_DL4 349
#define NOTE_DL5 392
#define NOTE_DL6 440
#define NOTE_DL7 493

#define NOTE_DH1 1046/TE_DH表示D调HIGH
#define NOTE_DH2 1175
#define NOTE_DH3 1318
#define NOTE_DH4 1397
#define NOTE_DH5 1568
#define NOTE_DH6 1760
#define NOTE_DH7 1976

#define WHOLE 1 //停顿
#define HALF 0.5
#define QUARTER 0.25
#define EIGHTH 0.25
#define SIXTEENTH 0.625

int tune[] =     //以下为《传邮万里》乐谱中音符部分，用tune整数序列表示
{
 NOTE_D0,NOTE_D0,NOTE_D0,NOTE_D3,NOTE_D4,
 NOTE_D5,NOTE_D5,NOTE_D1,NOTE_D3,NOTE_D4,
 NOTE_D5,NOTE_D1,NOTE_D1,
 NOTE_D6,NOTE_D1,NOTE_D6,NOTE_D7,NOTE_D1,
 NOTE_D5,NOTE_D3,NOTE_D4,
 NOTE_D2,NOTE_DL5,NOTE_D2,NOTE_D3,
 NOTE_D1,NOTE_DL5,
 NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D4,NOTE_D5,
 NOTE_D2,NOTE_DL5,
 NOTE_D2,NOTE_D2,NOTE_D2,NOTE_D2,NOTE_D3,NOTE_D4,
 NOTE_D3,NOTE_D1,
 NOTE_D6,NOTE_D6,NOTE_D6,NOTE_D6,NOTE_D7,NOTE_DH1,
 NOTE_D5,NOTE_D4,NOTE_D3,NOTE_DL6,
 NOTE_D4,NOTE_D4,NOTE_D4,NOTE_D4,NOTE_D5,NOTE_D6,
 NOTE_D5,NOTE_D2,NOTE_DL5,
 NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D3,NOTE_D4,NOTE_D5,
 NOTE_D2,NOTE_DL5,
 NOTE_D2,NOTE_D2,NOTE_D2,NOTE_D2,NOTE_D3,NOTE_D4,
 NOTE_D3,NOTE_D1,
 NOTE_D6,NOTE_D6,NOTE_D6,NOTE_D6,NOTE_D7,NOTE_DH1,
 NOTE_D5,NOTE_D4,NOTE_D3,NOTE_DL6,
 NOTE_D2,NOTE_D2,NOTE_D2,NOTE_D0,NOTE_D3,NOTE_D2,NOTE_D1,
 NOTE_DL6,NOTE_D1,NOTE_D1,
 NOTE_DL6,NOTE_D1,NOTE_D6,
 NOTE_D5,NOTE_D4,NOTE_D3,
 NOTE_D2,NOTE_D2,NOTE_D1,NOTE_D2,
 NOTE_D3,NOTE_D1,
 NOTE_D6,NOTE_D7,NOTE_DH1,
 NOTE_D5,NOTE_D1,NOTE_D1,
 NOTE_D6,NOTE_D6,NOTE_D7,NOTE_DH1,
 NOTE_DH2,NOTE_D3,NOTE_D4,
 NOTE_D5,NOTE_D5,NOTE_D1,NOTE_D3,NOTE_D4,
 NOTE_D5,NOTE_D1,NOTE_D1,
 NOTE_D6,NOTE_D6,NOTE_D6,NOTE_D7,NOTE_DH1,
 NOTE_D5,NOTE_D6,NOTE_D7,
 NOTE_DH1,NOTE_DH1,NOTE_DH1,NOTE_D7,NOTE_D5,
 NOTE_D6,NOTE_D4,NOTE_D5,
 NOTE_D6,NOTE_D6,NOTE_D5,NOTE_D4,NOTE_D5,
 NOTE_D2,NOTE_D3,NOTE_D4,
 NOTE_D5,NOTE_D5,NOTE_DH1,NOTE_D3,NOTE_D4,
 NOTE_D5,NOTE_D1,NOTE_D1,
 NOTE_D6,NOTE_D6,NOTE_D6,NOTE_D7,NOTE_DH1,
 NOTE_D5,NOTE_D6,NOTE_D7,
 NOTE_DH1,NOTE_DH1,NOTE_DH1,NOTE_D7,NOTE_D5,
 NOTE_D6,NOTE_D4,NOTE_D5,
 NOTE_D6,
 NOTE_D7,NOTE_D7,NOTE_D6,NOTE_D7,
 NOTE_DH1,NOTE_D0,
};
float duration[]=  //以下为《传邮万里》节拍部分，用浮点序列duration表示
{
 1,1,1,0.5+0.25,0.25,  //1
 1+1,0.5,0.5,0.5+0.25,0.25, //2
 1+1+1,0.5,0.5, //3
 1+0.5,0.5,1,0.5+0.25,0.25, //4
 1+1+1,0.5,0.5, //5
 1+0.5,0.5,1,1, //6
 1+1+1,1, //7
 1+0.5,0.5,0.5+0.25,0.25,0.5+0.25,0.25, //8
 1+1+1,1, //9
 1+0.5,0.5,0.5+0.25,0.25,0.5+0.25,0.25, //10
 1+1+1,1, //11
 1+0.5,0.5,1,0.5,0.5,0.5, //12
 1,1,1+0.5,0.5, //13
 1+0.5,0.5,1,0.5,0.5,0.5, //14
 1,1+1,1, //15
 1+0.5,0.5,0.5+0.25,0.25,0.5+0.25,0.25, //16
 1+1+1,1, //17
 1+0.5,0.5,0.5+0.25,0.25,0.5+0.25,0.25,//18
 1+1+1,1, //19
 1+0.5,0.5,1,0.5,0.5,0.5, //20
 1,1,1+0.5,0.5, //21
 1+0.5,0.5,0.5,0.5,0.5,0.5,0.5, //22
 1,1+1,1, //23
 1+1+1,0.5+0.25,0.25, //24
 1+1+1,0.5,0.5, //25
 1+0.5,0.5,1,1, //26
 1+1+1,1, //27
 1+1+1,0.5+0.25,0.25, //28
 1+1+1,0.5,0.5, //29
 1+0.5,0.5,1,1, //30
 1+1+1,0.5+0.25,0.25, //31
 1+1,0.5,0.5,0.5+0.25,0.25, //32
 1+1+1,0.5,0.5, //33
 1+1,0.5,0.5,0.5,0.5,//34
 1+1+1,0.5,0.5, //35
 0.5,1+1,0.5,0.5,0.5, //36
 1+1+1,0.5,0.5, //37
 1+1,0.5,0.5,0.5,0.5, //38
 1+1+1,0.5+0.25,0.25, //39
 1+1,0.5,0.5,0.5,0.25, //40
 1+1+1,0.5,0.5, //41
 1+1,0.5,0.5,0.5,0.5, //42
 1+1+1+1,0.5,0.5, //43
 0.5,1+1,0.5,0.5,0.5, //44
 1+1+1,0.5,0.5, //45
 1+1+1+1,//46
 1,1,0.5,1+0.5,//47
 1+1+1,1,//48
};
int length;//这里定义一个变量，后面用来表示共有多少个音符
int tonePin=5;//蜂鸣器的pin
int tonePIN=9;//蜂鸣器pin
const int buttonPin = 2; //按键模块
//int buttonState = 0;    //按键状态
int state=0; //控制蜂鸣器
int val=0;  //按钮状态
int old_val=0; //上一次按钮状态


void setup()
{
  pinMode(tonePin,OUTPUT);//设置蜂鸣器的pin为输出模式
   pinMode(tonePIN,OUTPUT);
  length = sizeof(tune)/sizeof(tune[0]);//这里用了一个sizeof函数，可以查出tone序列里有多少个音符
   pinMode(buttonPin, INPUT);//设置按键模块
   Serial.begin(115200);
}

void loop()
{
  for(int x=0;x<length;x++)//循环音符的次数
  {
    val = digitalRead(buttonPin);//读取按键状态
    if((val == HIGH)&&(old_val == LOW))//按键状态寄存器
    {
    state =1-state;
    delay(40); 
   }
  old_val = val;           
    if (state == HIGH) 
    {
      tone(tonePin,tune[x]);//此函数依次播放tune序列里的数组，即每个音符
      delay(250*duration[x]);//每个音符持续的时间，即节拍duration，调整时间越大，曲子速度越慢；越小曲子速度越快
      noTone(tonePin);//停止当前音符，进入下一音符
      tone(tonePIN,tune[x]);
    delay(250*duration[x]);
    noTone(tonePIN);//停止当前音符，进入下一音符
    
    Serial.print(state);//可用串口监视器观察按键状态
    }
    else
    {
      x=x-1;//停止在当前位置
      Serial.print(state);
    }
  }
}
