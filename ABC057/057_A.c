#include<stdio.h>

int day(c)
{
    if(c >= 24){
        c -= 24;

        return day(c);
    }
    else{
        return c;
    }
}

int main()
{
    int a;  scanf("%d", &a);
    int b;  scanf("%d", &b);
    int c;

    c = a + b;

    printf("%d\n", day(c));

    return 0;
}