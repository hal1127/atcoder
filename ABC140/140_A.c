#include<stdio.h>

int pow3(n){
    return n * n * n;
}

int main(void){
    int n;

    scanf("%d", &n);

    printf("%d", pow3(n));

    return 0;
}