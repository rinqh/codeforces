#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *a;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int Sereja = 0;
    int Dima = 0;
    int start = 0;
    int end = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            if (a[start] > a[end])
            {
                Dima += a[start];
                start++;
            }
            else
            {
                Dima += a[end];
                end--;
            }
        }
        else
        {
            if (a[start] > a[end])
            {
                Sereja += a[start];
                start++;
            }
            else
            {
                Sereja += a[end];
                end--;
            }
        }
    }

    printf("%d %d", Sereja, Dima);
}