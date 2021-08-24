#include<stdio.h>

typedef struct{
    int xco;
    int yco;
    int num;
} stPoint;

typedef struct{
    int dist;
    int num;
}stDist;

int ads(int n)
{
    return (n > 0) ? n : -n;
}

int main()
{
    int n;  scanf("%d", &n);
    int m;  scanf("%d", &m);

    stPoint human[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d%d", &human[i].xco, &human[i].yco);
        human[i].num = i + 1;
    }

    stPoint checkp[m];
    for(i = 0; i < m; i++){
        scanf("%d%d", &checkp[i].xco, &checkp[i].yco);
        checkp[i].num = i + 1;
    }

    stDist Dist = {0};
    stDist tmp;
    int j;
    for(i = 0; i < n; i++){
        Dist.dist = ads(human[i].xco - checkp[0].xco)
                + ads(human[i].yco - checkp[0].yco);
        Dist.num = 1;

        for(j = 1; j < m; j++){
            tmp.dist = ads(human[i].xco - checkp[j].xco)
                    + ads(human[i].yco - checkp[j].yco);
            tmp.num = j + 1;
            if(tmp.dist < Dist.dist){
                Dist = tmp;
            }
        }
        printf("%d\n", Dist.num);
    }

    return 0;
}