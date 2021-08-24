#include<stdio.h>

void sort(int n, int S[n])
{
    int i, j;
    int tmp;

    for(i = 0; i < n - 1; i ++){
        for(j = n - 1; j > i; j--){
            if(S[j - 1] > S[j]){
                tmp = S[j - 1];
                S[j - 1] = S[j];
                S[j] = tmp;
            }
        }
    }
}

int main()
{
    int n;  scanf("%d", &n);
    int S[n];
    int i;
    int sum = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &S[i]);
        sum += S[i];
    }

    sort(n, S);

    i = 0;
    while(sum % 10 == 0){
        if(S[i] % 10 != 0){
            sum -= S[i];
        }
        i++;
        if(i == n){
            sum = 0;
            break;
        }
    }

    printf("%d\n", sum);

    return 0;
}