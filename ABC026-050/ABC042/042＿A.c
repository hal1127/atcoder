#include<stdio.h>

int main(void){
    int n[3];
    int i;
    int cnt_go = 0;
    int cnt_shichi = 0;

    scanf("%d %d %d", &n[0], &n[1], &n[2]);

    for(i = 0; i < 3; i++){
        if(n[i] == 5){
            cnt_go++;
        }
        if(n[i] == 7){
            cnt_shichi++;
        }
    }

    if(cnt_go == 2 && cnt_shichi == 1){
        puts("YES");
    }
    else{
        puts("NO");
    }


    return 0;
}