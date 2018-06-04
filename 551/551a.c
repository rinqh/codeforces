#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int n;
    int *a;
    int *b;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    b = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    qsort(b, n, sizeof(int), cmpfunc);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", j + 1);
                break;
            }
        }
    }
}