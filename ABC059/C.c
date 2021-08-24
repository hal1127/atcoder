#include<stdio.h>

int abs(int num)
{
    return (num > 0) ? num : -num;
}

int main()
{
    int n;  scanf("%d", &n);
    int A[n];
    int i;
    int sum = 0;
    int ans = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    for(i = 0; i < n - 1; i++){
        sum += A[i];
        if(sum > 0){
            if(sum >= -A[i + 1]){
            ans += abs(sum + A[i + 1] + 1);
            A[i + 1] -= abs(sum + A[i + 1] + 1);
            }
        }
        else{
            if(sum <= -A[i + 1]){
            ans += abs(sum + A[i + 1] - 1);
            A[i + 1] += abs(sum + A[i + 1] + 1);
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}