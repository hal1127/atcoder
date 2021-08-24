#include<stdio.h>

int main()
{
    int n;  scanf("%d", &n);

    if(n == 1){
        printf("Hello World\n");
    }
    else{
        int a;
        int b;
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}