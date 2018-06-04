#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    int *a, *b;
    int l, r;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    b = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
        b[i] = a[i];
    }
    qsort(b, n, sizeof(int), cmpfunc);
    l = 0;
    while (l < n && a[l] == b[l])
    {
        l++;
    }
    if (l >= n)
    {
        printf("yes\n");
        printf("1 1");
        return 0;
    }
    r = n - 1;
    while (a[r] == b[r])
    {
        r--;
    }
    //int tmp = (r + l)/2;
    //printf("%d %d\n", l, r);
    int i = 0;
    while (i < r -l + 1)
    {
        if (a[l + i] != b[r - i])
        {
            printf("no");
            return 0;
        }
        i++;
    }
    printf("yes\n");
    printf("%d %d", l + 1, r + 1);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%i ", a[i]);
    // }
}