#include<stdio.h>
#include<string.h>

int check_S(int n, const char S[200])
{
    int i;
    int check = 0;
    for(i = 0; i < n / 2 - 1; i++){
        if(S[i] != S[n / 2 + i]){
            check = 1;
        }
    }

    return check;
}

void put_ans(int n)
{
    printf("%d\n", n);
}

int main()
{
    char S[200] = {'\0'};
    int n;
    int i;
    int check = 0;

    scanf("%s", S);


    for(i = 0; S[i]; i++){
        ;
    }
    n = i;

    if(n % 2 == 1){
        n--;
    }
    else{
        n -= 2;
    }


    while(check_S(n, S) == 1){
        n -= 2;
    }
    put_ans(n);

    return 0;
}