#include<stdio.h>

int main()
{
    int n;  scanf("%d", &n);
    int a[n];
    int b[n];
    int i;
    int j = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        if(i % 2 == 0) b[n / 2 + j++] = a[i];
        if(i % 2 == 1) b[n / 2 - j] = a[i];
    }

    if(n % 2 == 1){
        int tmp;
        for(i = 0; i < n / 2; i++){
            tmp = b[i];
            b[i] = b[n - 1 - i];
            b[n - 1 - i] = tmp;
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", b[i]);
    }

    return 0;
}