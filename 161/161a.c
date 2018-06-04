#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100005
int r[MAXN + 5];

int main() {
    int n, m, x, y;
    int* a;
    int* b;
    int count = 0;
    
    scanf("%d %d %d %d", &n, &m, &x, &y);
    a = (int*)malloc(sizeof(int) * n);
    b = (int*)malloc(sizeof(int) * m);
    for(int i = 0; i <n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }

    memset(r, 0, sizeof(r));
    int j = 0;
    for(int i = 0; i < n; i++){
        //printf("%d %d %d\n", a[i], b[j], count);
        while((j < m) && (a[i] - x > b[j])){
            //printf("j: %d %d\n", j, count);
            j++;
        } 
        if(j >= m) break;
        if(a[i] + y >= b[j]){
            count++;
            r[i+1] = j+1;
            j++;
            if(j >= m) break;
        }
        //printf("Lan 2 %d %d %d\n", a[i], b[j], count);
    }
    printf("%d\n", count);
    int i = 0;
    while (count > 0){
        if(r[i]){
            printf("%d %d\n", i, r[i]);
            count--;
        }
        i++;
    }
}