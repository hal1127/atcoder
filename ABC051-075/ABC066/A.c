#include<stdio.h>

int main()
{
    int a;  scanf("%d", &a);
    int max = a;
    int b;  scanf("%d", &b);
    max = (max < b) ? b : max;
    int c;  scanf("%d", &c);
    max = (max < c) ? c : max;

    printf("%d\n", a + b + c - max);

    return 0;
}