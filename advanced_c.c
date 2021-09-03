#include <stdio.h>
#include <stdlib.h>

int main(void){
    double* ptd;
    double* ptd2;
    //malloc() 接受所需内存字节数 开辟一个匿名内存
    //free（）接受malloc（）返回的内存地址，进行内存释放
    //返回内存块首地址 类似数组名
    //分配内存失败 返回空指针
    ptd=(double*)malloc(30*sizeof(double));//强制类型转换 type（内容） 
    ptd2=malloc(30*sizeof(double));
    *ptd=3.14;
    *ptd2=6.28;
    //数组显示使用的内存地址
    printf("%f和%f和%f\n",*ptd,*ptd2,ptd[0]);
}