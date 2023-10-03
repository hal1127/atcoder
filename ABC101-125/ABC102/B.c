#include<stdio.h>

int main()
{
    int n;  scanf("%d", &n);
    int a[n];
    int min, max;

    int i;

    scanf("%d", &a[0]);
    min = a[0];
    max = a[0];
    for(i = 1; i < n; i++){
        scanf("%d", &a[i]);

        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}