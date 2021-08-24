#include<stdio.h>

int main(){
    int n;
    int d;
    int tmp = 0;

    scanf("%d %d", &n, &d);


    int i;
    for(i = 0; tmp < n; i++){
        tmp += 1 + 2 * d;
    }

    printf("%d", i);

    return 0;
}