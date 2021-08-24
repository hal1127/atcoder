#include<stdio.h>

int candy(int n){
    int i;
    int tmp = 0;

    for(i = 1; i <= n; i++){
        tmp += i;
    }

    return tmp;
}

int main(void){
    int N;

    scanf("%d", &N);

    printf("%d\n", candy(N));

    return 0;
}