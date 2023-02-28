#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter a = ");
    scanf("%i", &a);
    printf("Enter b = ");
    scanf("%i", &b);
    int ab = a + b;
    a = b;
    b = ab - b;
    printf("a = %i and b = %i\n", a, b);
    return 0;
}