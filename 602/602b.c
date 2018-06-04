#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *a;
    int maxLength = 0;
    int curLength = 0;
    int imin = 0;
    int imax = 0;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > a[imax])
        {
            if (curLength > maxLength)
            {
                maxLength = curLength;
            }
            imin = imax;
            imax = i;
            curLength = i - imin + 1;
        }
        else if (a[i] < a[imin])
        {
            if (curLength > maxLength)
            {
                maxLength = curLength;
            }
            imax = imin;
            imin = i;
            curLength = i - imax + 1;
        }
        else
        {
            curLength++;
            if (i != 0 && a[i] < a[i - 1])
            {
                imin = i;
            }
            else if (i != 0 && a[i] > a[i - 1])
            {
                imax = i;
            }
        }
    }

    // printf("%d %d:%d %d:%d %d %d\n", i, imin, a[imin], imax, a[imax], curLength, maxLength);

    printf("%d", curLength > maxLength ? curLength : maxLength);
}