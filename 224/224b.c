#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


#define MAXN 100005
int b[MAXN + 5];

int main() {
    int n, k, l, r, m;
    int count, length;
    n = k = l = r = m = count = length = 0;
    scanf ("%i %i", &n, &k);
    int *a = (int *)malloc (sizeof(int) * (n + 1));
    for (int  i = 1; i <= n; i ++){
        scanf("%i", &a[i]);
    }
    memset(b, 0, sizeof(b));
    //printf("%i\n", b[100004]);
    l = 1;
    for (int i = 1; i <= n; i ++){
        if (b[a[i]]){       // kiem tra la da duyen qua a[i] chua neu roi thi b[a[i]] se ton tai
            b[a[i]] = i;
            if(a[i] == a[l]){
                while(b[a[l]] != l) l++;    // chuyen left len vi tri dau tien chua bi lap lai
            }
            continue;
        }
        b[a[i]] = i;
        count ++;
        if (count == k){
            r = i;
            break;
        }
    }

    if (r!=0 ){
        printf("%i %i\n", l, r);
    } else {
        printf("-1 -1\n");
    }
        
}