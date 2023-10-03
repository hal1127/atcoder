#include<stdio.h>

int hotel(int n, int k, int x, int y){
    int i;
    int tmp = 0;

    for(i = 0; i < n; i++){
        if(i < k){
            tmp += x;
        }
        if(i >= k){
            tmp += y;
        }
    }
    return tmp;
}

int main(void){
    int n, k, x, y;

    scanf("%d", &n);

    scanf("%d", &k);

    scanf("%d", &x);

    scanf("%d", &y);

    printf("%d\n", hotel(n, k, x, y));

    return 0;
}