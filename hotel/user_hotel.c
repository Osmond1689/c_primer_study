#include <stdio.h>
#include "hotel.h" //开发自己的私有库使用“”导入

int main(void){
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu())) != QUIT){
        switch (code)
        {
        case 1: hotel_rate = HOTEL1;
        /* constant-expression */:
            /* code */
                break;
        case 2: hotel_rate = HOTEL2;
                break;
        case 3: hotel_rate = HOTEL3;
                break;
        case 4: hotel_rate = HOTEL4;
                break;  
        default:hotel_rate = 0.0;
                printf("Oops!\n");
                break;
        }
        nights = getnights();
        show_price(hotel_rate,nights);
    }
    printf("thankyou and goodbye!\n");
    
    return 0;
}