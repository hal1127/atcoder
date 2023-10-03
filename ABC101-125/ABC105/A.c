#include<stdio.h>

int main()
{
    int n, k;   scanf("%d%d", &n, &k);

    printf("%d\n", (n % k) ? 1 : 0);

    return 0;
}