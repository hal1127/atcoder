#include<stdio.h>

int X, Y, Z;

int main()
{
    int num;

    scanf("%d%d%d", &X, &Y, &Z);

    num = (X - Z) / (Y + Z);

    printf("%d\n", num);

    return 0;
}