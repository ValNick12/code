#include <stdio.h>

int main()
{
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = n + 1; i < m; ++i)
    {
        sum += i;
    }
    printf("%d\n", sum);
}