#include<stdio.h>

int main()
{
    char S[27];     scanf("%s", S);
    int i, j;
    int check = 0;

    for(i = 0; S[i]; i++){
        for(j = 0; S[j]; j++){
            if(i != j){
                if(S[i] == S[j]){
                    check = 1;
                }
            }
        }
    }

    if(check == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}