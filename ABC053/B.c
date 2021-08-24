#include<stdio.h>

char S[2000001];
int A[2000001] = {0};
int Z[2000001] = {0};

int main()
{
    scanf("%s", S);

    int i;
    int ja = 0;
    int jz = 0;
    int j;
    int max = 0;

    for(i = 0; S[i]; i++){
        if(S[i] == 'A'){
            A[ja] = i;
            ja++;
        }
        else{
            if(S[i] == 'Z'){
                Z[jz] = i;
                jz++;
            }
        }
    }

    max = (Z[jz - 1] - A[0]);

    printf("%d\n", max + 1);

    return 0;
}