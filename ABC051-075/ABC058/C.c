#include<stdio.h>

int main()
{
    int n;

    int i, j, k;

    scanf("%d", &n);

    int A[n][26];
    int Amin[26];
    char S[n][51];
    int check;

    for(i = 0; i < n; i++){
        scanf("%s", S[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < 26; j++){
            A[i][j] = 0;
        }
    }

    for(i = 0; i < 26; i++){
        Amin[i] = 50;
    }

    for(i = 0; i < n; i++){
        for(j = 0; S[i][j]; j++){
            A[i][S[i][j] - 'a']++;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < 26; j++){
            if(Amin[j] > A[i][j]){
                Amin[j] = A[i][j];
            }
        }
    }


    for(i = 0; i < 26; i++){
        for(j = 0; j < Amin[i]; j++){
            putchar('a' + i);
        }
    }
    putchar('\n');

    return 0;
}