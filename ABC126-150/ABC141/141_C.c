#include<stdio.h>

int main()
{
    int n;  scanf("%d", &n);
    int k;  scanf("%d", &k);
    int q;  scanf("%d", &q);
    int s[n];
    int a[q];

    int i;
    for(i = 0; i < n; i++){
        s[i] = 0;
    }

    for(i = 0; i < q; i++){
        scanf("%d", &a[i]);
    }

    int j;
    for(i = 0; i < q; i++){
        s[a[i] - 1]++;
    }

    for(i = 0; i < n; i++){
        if((s[i] - q + k) > 0){
            puts("Yes");
        }
        else{
            puts("No");
        }
    }

    return 0;
}