#include<stdio.h>

int main()
{
    int a;  scanf("%d", &a);
    int b;  scanf("%d", &b);

    ((a + b) < 10)
    ? printf("%d\n", a + b) : printf("error\n");

    return 0;
}