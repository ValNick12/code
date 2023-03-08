#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    /*for (int i = 0; i < 10; i++){
        printf("%d\n", i + 1);
    }*/  
    
    /*for (int i = 0; i < 10; i++){
        for (int k = 0; k < i + 1; k++){
            printf("*");
        }
    printf("\n");
    }*/ 

    /*char ch;
    scanf("%c", &ch);
    printf("%c%c%c%c%c%c%c%c%c%c\n", ch, ch, ch, ch, ch, ch, ch, ch, ch, ch);
    printf("%c        %c\n", ch, ch);
    printf("%c        %c\n", ch, ch);
    printf("%c        %c\n", ch, ch);
    printf("%c%c%c%c%c%c%c%c%c%c\n", ch, ch, ch, ch, ch, ch, ch, ch, ch, ch);*/

    /*float deg;
    scanf("%f", &deg);
    printf("%f", (deg*9/5) + 32);*/

    /*float money;
    const float BGN_EUR = 0.512021; float BGN_USD = 0.543732; float BGN_GBP = 0.457807;
    printf("Enter BGN: ");
    scanf("%f", &money);
    printf("BGN to EUR: %f\nBGN to USD: %f\nBGN to GBP: %f\n", money*BGN_EUR, money*BGN_USD, money*BGN_GBP);*/
    
    float deg;
    const double pi = 3.14159265359;
    printf("Enter deg=");
    scanf("%f", &deg);
    double deg1 = deg * pi / 180.0;
    printf("sine from deg: %f\ncosine from deg: %f\ntan from deg: %f\nctan from deg: %f\n", sin(deg1), cos(deg1), tan(deg1), 1/tan(deg1));
    return 0;
}