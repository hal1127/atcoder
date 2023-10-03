#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);

    if(c == 2 * b - a){
        puts("YES");
    }
    else{
        puts("NO");
    }

    return 0;
}