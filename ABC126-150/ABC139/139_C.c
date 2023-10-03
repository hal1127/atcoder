#include<stdio.h>

void kaisu(int n, int h[n], int k[n]){
    int i, j;

    for(i = 0; h[i]; i++){
        for(j = 0; j < h[i + j]; j++){
            k[i] = 0;
            if(h[i + j] > h[i + j + 1]){
                k[i]++;
            }
            else{
                break;
            }
        }
    }
}

int k_max(int n, int k[n]){
    int i, j;
    int k_m;

    for(i = 0; i< n - 1; i++){
        for(j = n - 1; j > i; j++){
            if(k[j - 1] > k[j]){
                int tmp = k[j];
                k[j] = k[j - 1];
                k[j - 1] = tmp;
            }
        }
    }

    k_m = k[n - 1];

    return k_m;
}

int main(void){
    int n;

    scanf("%d", &n);

    char h[n];
    int k[n];

    scanf("%s", h);

    kaisu(n, h, k);

    printf("%d", k_max(n, k));

    return 0;
}