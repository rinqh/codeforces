#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *a;
    int l = 0;
    int range = 0;
    int maxRange = 0;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] - a[i] != 0)
        {
            if (l != 0 && a[i + 1] - a[i] != a[l] - a[l - 1])
            {
                range = i - l + 1;
                l = i;
                if (range > maxRange)
                {
                    maxRange = range;
                }
            }
        }
        printf("%d %d %d %d\n", i, l, range, maxRange);
    }
    printf("%d", n - l > maxRange ? n - l : maxRange);
}