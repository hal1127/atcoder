#include<stdio.h>

int main()
{
    int n, t;   scanf("%d%d", &n, &t);
    int C[n], T[n];
    int i;
    int bkt[1001];
    int check = 0;

    for(i = 1; i < 1001; i++){
        bkt[i] = 1000;
    }

    for(i = 0; i < n; i++){
        scanf("%d", &C[i]);
        scanf("%d", &T[i]);
        bkt[C[i]] = T[i];
    }

    for(i = 1; i < 1001; i++){
        if(bkt[i] <= t){
            check = 1;
            printf("%d\n", i);
            break;
        }
    }

    if(check == 0){
        puts("TLE");
    }

    return 0;
}