#include <stdio.h>

int main(void){
    int a=150;
    int b=20;
    a^=b^=a^=b;
    printf("a%d,b%d\n",a,b);
}