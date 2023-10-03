#include<stdio.h>

int cnt[100001] = {0};

int main()
{
    int n, k;   scanf("%d%d", &n, &k);
    int a, b;
    int i;
    int ans;
    int tmp = 0;

    for(i = 0; i < n; i++){
        scanf("%d%d", &a, &b);
        cnt[a] += b;
    }

    for(ans = 1; tmp < k; ans++){
        tmp += cnt[ans];
    }

    printf("%d\n", ans - 1);

    return 0;
}