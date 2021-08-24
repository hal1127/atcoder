#include<stdio.h>

int main(void){
    int i;
    int a, b;
    int tmp = 1;

    scanf("%d %d", &a, &b);

    for(i = 0; tmp < b; i++){
        tmp += a - 1;
    }

    printf("%d", i);

    return 0;
}