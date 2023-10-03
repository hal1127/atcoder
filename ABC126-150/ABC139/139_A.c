#include<stdio.h>

int tenki(const char s[3], const char t[3]){
    int i;
    int tmp = 0;

    for(i = 0; i < 3; i++){
        if(s[i] == t[i]){
            tmp++;
        }
    }

    return tmp;
}

int main(void){
    char s[3];
    char t[3];

    scanf("%s", s);
    scanf("%s", t);

    printf("%d", tenki(s, t));

    return 0;
}