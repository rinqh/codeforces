#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t;
    int max = 0;
    int current = 0;
    int sum = 0;
    int *a;
    scanf("%d %d", &n, &t);
    a = (int *)malloc(sizeof(int) * n);
    int start = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        if (sum > t)
        {
            current = i - 1 - start + 1;
            if (current > max)
            {
                max = current;
                current = 0;
            }
            while (sum > t)
            {
                sum -= a[start];
                start++;
            }
        }
    }
    if (i >= n)
    {
        //printf("%d %d\n", n, start);
        current = n - 1 - start + 1;
    }
    printf("%d", current > max ? current : max);
}