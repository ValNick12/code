#include <stdio.h>
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d\n", a, b);
    if(a > 3 && b < -1){
        printf("Yes yes dop dop!\n");
    }
    else if(a == 0 && b == 5){
        printf("W W W W\n");
    }
    else{
        printf("Sry\n");
    }
    switch(a){
        case 1:
            printf("%d\n", b+1);
            break;
        case 2:
            printf("%d\n", b+2);
            break;
        case 3:
            printf("%d\n", b+3);
            break;
        default:
            printf("%d\n", b+10);
            break;
    }
    return 0;
}