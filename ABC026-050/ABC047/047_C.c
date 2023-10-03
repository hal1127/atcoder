#include<stdio.h>

char s1[100000] = {'\0'};
char s2[100000] = {'\0'};

int main()
{
    int i;
    int j = 1;
    char tmp;

    scanf("%s", s1);

    s2[0] = s1[0];

    for(i = 1; s1[i]; i++){
        if(s1[i] != s2[j - 1]){
            s2[j] = s1[i];
            j++;
        }
    }
    
    printf("%d\n", j - 1);

    return 0;
}