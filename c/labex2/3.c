#include <stdio.h>

int main()
{
    int n, m, sum2k = 0, prod2k1 = 1;
    scanf("%d %d", &n, &m);
    for (int i = n + 1; i < m; ++i)
    {
        if (i % 2 == 0)
        {
            sum2k += i;
        }
        else if (i % 2 == 1)
        {
            prod2k1 *= i;
        }
    }
    printf("%d\n%d\n", sum2k, prod2k1);
}