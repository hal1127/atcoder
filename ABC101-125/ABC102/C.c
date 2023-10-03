#include<stdio.h>

int A[200000];

int abs(int a)
{
    return (a > 0) ? a : -a;
}

void sort(int n, int B[n])
{
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = n - 2; j > i; j--){
            if(B[j + 1] > B[j]){
                int tmp;
                tmp = B[j + 1];
                B[j + 1] = B[j];
                B[j] = tmp;
            }
        }
    }
}

int main()
{
    int n;  scanf("%d", &n);

    int i;
    int B[n];
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
        B[i] = A[i] - (i + 1);
    }

    sort(n, B);

    if(n % 2 == 0){
        int b1, b2;
        b1 = B[n / 2];
        b2 = B[n / 2 - 1];
        int sum1 = 0, sum2 = 0;
        for(i = 0; i < n; i++){
            sum1 += abs(B[i] - b1);
            sum2 += abs(B[i] - b2);
        }
        printf("%d\n", (sum1 < sum2) ? sum1 : sum2);
    }
    else{
        int b;
        int sum = 0;
        b = B[n / 2];
        for(i = 0; i < n; i++){
            sum += abs(B[i] - b);
        }
        printf("%d\n", sum);
    }

    return 0;
}