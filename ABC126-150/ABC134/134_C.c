#include<stdio.h>

void sort(int n, int *a1){
    int i;

    for(i = 0; i < n; i++){
        int j;
        for(j = n - 2; j >=  i; j--){
            if(a1[j] > a1[j + 1]){
                int tmp;
                tmp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = tmp;
            }
        }
    }
}

void ary_cpy(int n , int *a1, int *a2){
    int i;

    for(i = 0; i < n; i++){
        a2[i] = a1[i];
    }
}

void max(int n, int *a){
    int max1;
    int max2;
    int i;
    int b[n];

    ary_cpy(n, a, b);

    sort(n, b);

    max1 = b[n - 1];
    max2 = b[n - 2];

    for(i = 0; i < n; i++){
        if(a[i] != max1){
            printf("%d\n", max1);
        }
        else{
            printf("%d\n", max2);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    max(n, a);

    return 0;
}