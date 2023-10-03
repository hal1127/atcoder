#include<stdio.h>

int sum_a(int n, const int a[n])
{
    int i;
    int sum = 0;
    for(i = 0; i < n; i++){
        sum += a[i];
    }

    return sum;
}

int avg_a(int n, const int a[n])
{
    return  sum_a(n, a) / n;
}

int main(){
    int n;  scanf("%d", &n);
    int m;  scanf("%d", &m);
    int a[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int j;
    for(i = 0; i < m; i++){
        int avg = avg_a(n, a);
        for(j = 0; j < n; j++){
            if(a[j] >= avg){
                a[j] /= 2;
                break;
            }
        }
    }

    printf("%d", sum_a(n, a));

    return 0;
}