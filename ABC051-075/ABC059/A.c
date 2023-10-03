#include<stdio.h>
#include<ctype.h>

int main()
{
    char s[3][11];
    char ans[4] = {'\0'};
    int i;

    for(i = 0; i < 3; i++){
        scanf("%s", s[i]);
    }

    for(i = 0; i < 3; i++){
        ans[i] = toupper(s[i][0]);
    }

    printf("%s\n", ans);

    return 0;
}