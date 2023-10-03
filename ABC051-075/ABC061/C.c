#include<stdio.h>

typedef struct{
    int a;
    int b;
} stArray;

void sort(stArray A[], int n)
{
    int i, j;
    stArray tmp;

    for(i = 0; i < n -1; i++){
        for(j = n - 1; j > i; j--){
            if(A[j - 1].a > A[j].a){
                tmp = A[j - 1];
                A[j - 1] = A[j];
                A[j] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    int k;  scanf("%d%d", &n, &k);
    stArray A[n];
    int i;
    int tmp;

    for(i = 0; i < n; i++){
        scanf("%d%d", &A[i].a, &A[i].b);
    }

    sort(A, n);

    tmp = 0;
    for(i = 0; tmp < k; i++){
        tmp += A[i].b;
    }

    printf("%d\n", A[i - 1].a);

    return 0;
}