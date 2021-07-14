#include <stdio.h>/*默认库*/
#include <string.h>
#define NAME "osmond"//预处理器 别名 尽量全大写

void test();//声明原型
void scanf_test();
void string_test();
void loop_test();

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
    loop_test();
    return 0;
}

void test(void)
{
    printf("this is test\n");
}
void scanf_test(void)
{
    char i_test[3];
    scanf("%s",i_test);//获取输入，存入i_test变量，写入内存地址，&取地址符 字符串名称就是地址
    printf("%s",i_test);
    getchar();//读取下一个输入字符
    printf("test %s\n",i_test);
    printf("%zd",sizeof(i_test));//以字节为单位,zd格式化，或u，lu，返回size_t类型 无符合整数
    string_test();
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
        continue;
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

void array_test()//数组，字符数组+\0=字符串
{
    
}