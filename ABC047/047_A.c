#include<stdio.h>

int main()
{
    int a[3];    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    int sum = a[0] + a[1] + a[2];

    if(sum % 2 != 0){
        puts("No");
    }

    else{
        int i;
        int check = 0;
        for(i = 0; i < 3; i++){
            if(sum / 2 == a[i]){
                check = 1;
            }
        }
        if(check == 1){
            puts("Yes");
        }
        else{
            puts("No");
        }
    }

    return 0;
}