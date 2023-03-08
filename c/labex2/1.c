#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    scanf("%d", &k);
    for (int i = 1; i < k + 1; i++)
    {
        for (int n = 0; n < i; n++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}