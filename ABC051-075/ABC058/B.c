#include<stdio.h>

int main()
{
    char O[51];
    char E[51];
    char P[101] = {'\0'};
    int i, j;

    scanf("%s%s", O, E);

    j = 0;
    for(i = 0; O[i]; i++){
        P[j++] = O[i];
        P[j++] = E[i];
    }

    printf("%s\n", P);

    return 0;
}