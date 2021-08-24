#include<stdio.h>

int main()
{
    char s[101];
    int check;

    scanf("%s", s);

    int i;
    for(i = 1; s[i]; i += 2){
        if(s[i] == 'R'){
            check = 1;
            break;
        }
    }

    for(i = 0; s[i]; i += 2){
        if(s[i] == 'L'){
            check = 1;
            break;
        }
    }

    if(check == 1){
        printf("No");
    }
    else{
        printf("Yes");
    }

    return 0;
}