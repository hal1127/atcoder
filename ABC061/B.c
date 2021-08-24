#include<stdio.h>

int main()
{
    int n, m;   scanf("%d%d", &n, &m);
    int U[n];
    int i;
    int tmp[2];

    for(i = 0; i < n; i++){
        U[i] = 0;
    }

    for(i = 0; i < m; i++){
        scanf("%d%d", &tmp[0], &tmp[1]);

        U[tmp[0] - 1]++;
        U[tmp[1] - 1]++;
    }

    for(i = 0; i < n; i++){
        printf("%d\n", U[i]);
    }

    return 0;
}