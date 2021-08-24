#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double l = n / 2;

    if(n % 2 == 0){
        printf("%f\n", l / n);
    }
    else{
        printf("%f\n", (l + 1) / n);
    }
}