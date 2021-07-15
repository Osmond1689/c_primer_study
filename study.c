#include <stdio.h>/*默认库*/
#include <string.h>
#include <ctype.h> //判断类型库，判断通过返回真失败返回假
/*
isalnum() 字母数字
isalpha() 字母
isablank() 标准的空白字符
iscntrl() 控制字符
isdigit() 数字
isgraph() 除空格以为可打印的字符
islower() 小写字母
isprint() 可打印字符
ispunct() 标点符合
isspace() 空白字符
isupper() 大写字符
isxdigit() 十六进制数字符
tolower() 转小写
toupper() 转大写
*/
#define NAME "osmond"//预处理器 别名 尽量全大写

void test();//声明原型
void scanf_test();
void string_test();
void loop_test();
void if_test();
void switch_test();
void io_test();
/*
使用iso646.h 
可以使用and or not
逻辑运算符 
与 &&
或 ||
非！
*/
/*
int,默认10进制%d，0x 16进制%x，08进制%o
long,
short,
float,
double,%f
char,%c,ASCII码，65=‘A’
unsigned,无符合
位bit，字节byte,1byte=8bit
复数和虚数，
_bool,布尔值，1,0
强制类型转换s='1';i=(int)s
*/
int main(void)//默认方法格式，void 无返回值
{
    int num=1;
    
    printf("hello world %d\n",num);//要加分号
    //test();//调用方法
    //scanf_test();
    //loop_test();
    //if_test();
    //switch_test();
    io_test();
    return 0;
}

void test(void)
{
    printf("this is test\n");
}
void scanf_test(void)
{
    char i_test[3];
    char ch;
    scanf("%s",i_test);//获取输入，存入i_test变量，写入内存地址，&取地址符 字符串名称就是地址
    printf("%s",i_test);
    getchar();//读取下一个输入字符
    printf("test %s\n",i_test);
    printf("%zd",sizeof(i_test));//以字节为单位,zd格式化，或u，lu，返回size_t类型 无符合整数
    ch=getchar();//获取输入字符
    putchar(ch);//输出字符，只能处理char
}

void string_test(void)
{
    const char company[5] = "IVI";//c语言中为只读变量，非常量
    char name1[10];//声明
    char name2[8]="osmond";//初始化,要多一位\0结束符
    printf("%zd",strlen(name2));//计算长度
    printf("%s\n",NAME);
    printf("%s\n",company);

}

void loop_test(void)//void可省略,无参数
{
    while (1)//while循环
    {
        printf("这是死循环");
        break;//跳出整个循环
    }
    for (int index=0;index<2;index++)//for循环 执行一次；条件语句；每次循环结束都执行
    {
        printf("循环%d次",index);
        continue;//跳出本次循环
    }
    int i=0;
    for (printf("test");i<2;printf("test"))//for test
    {
        printf("end");
        i++;
    }
    do//do ... while 循环
    {
        printf("循环");
    }
    while(i<2);
}

void if_test(void)
{
    int i=0;
    if (i<1)//if
    {
        printf("小于1");
    }
    else if(i>1)
    {
        printf("大于1");
    }
    else 
    {
        printf("出现意外");
    }
    /*运算符？：*/
    i=(i=0)?1:2;
    printf("%d",i);
}

void switch_test()
{
    test_title://goto 测试
    switch (1)//swicth
    {
    case 1/* constant-expression */:
        /* code */
        printf("test");
        break;
    case 2:
        break;
    
    default:
        break;
    }
    goto test_title;//goto 测试
    //goto
}

void io_test()
{   
    char ch;
    while ((ch=getchar())!=EOF)//末尾会检测到EOF，EOF是一个值
    {
        printf("持续");
    }
    printf("结束");
}


// void array_test()//数组，字符数组+\0=字符串
// {
    
// }
