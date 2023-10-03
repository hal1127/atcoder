#include<stdio.h>

int main()
{
    int w;  scanf("%d", &w);
    int h;  scanf("%d", &h);
    int n;  scanf("%d", &n);
    int minx = 0;
    int miny = 0;


    int i;
    for(i = 0; i < n; i++){
        int tmpx;   scanf("%d", &tmpx);
        int tmpy;   scanf("%d", &tmpy);
        int a;  scanf("%d", &a);
        switch(a){
            case 1 : if(minx < tmpx) minx = tmpx;   break;
            case 2 : if(tmpx < w) w = tmpx;     break;
            case 3 : if(miny < tmpy) miny = tmpy;   break;
            case 4 : if(tmpy < h) h = tmpy;     break;
        }
    }

    int s;
    if(w > minx){
        s = ((w - minx) * (h - miny) > 0) ? ((w - minx) * (h - miny)) : 0;
    }
    else{
        s = 0;
    }

    printf("%d", s);

    return 0;
}