#include<stdio.h>
#include<string.h>



int main()
{
    char a[102];  scanf("%s", a);
    char b[102];  scanf("%s", b);
    int na;
    int nb;
    int i;

    for(i = 0; a[i]; i++){
        ;
    }
    na = i;
    for(i = 0; b[i]; i++){
        ;
    }
    nb = i;

    if(na > nb){
        printf("GREATER\n");
    }
    else{
        if(na < nb){
            printf("LESS\n");
        }
        else{
            if(strcmp(a, b) > 0){
                printf("GREATER\n");
            }
            else{
                if(strcmp(a, b) < 0){
                    printf("LESS\n");
                }
                else{
                    printf("EQUAL\n");
                }
            }
        }
    }

    return 0;
}