#include <stdio.h>

int main()
{
    int n, k, counter = 0, curr;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &curr);
        if (curr > k && curr % 3 == 0)
        {
            counter++;
        }
    }
    printf("%d\n", counter);
}