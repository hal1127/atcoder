#include<stdio.h>
#include<string.h>

int main()
{
    char s[7];

    scanf("%s", s);

    if(strcmp(s, "Sunny") == 0){
        printf("Cloudy");
    }
    else{
        if(strcmp(s, "Cloudy") == 0){
            printf("Rainy");
        }
        else{
            printf("Sunny");
        }
    }

    return 0;
}
