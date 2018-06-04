#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int m, n;
    int* a;
    int count = 0;
    int tmp = 0;
    scanf("%d %d", &n, &m);
    a = (int *)malloc(sizeof(int) * n);

    for (int  i = 0; i < n; i++){
        scanf("%i", &a[i]);
    }
    int j = 0;
    for (int  i = 0; i < m; i++){
        scanf("%d", &tmp);
        if(tmp >= a[j]){
            count++;
            j++;
        }
        if(j >= n) break;
    }
    printf("%d", n - count);
}
