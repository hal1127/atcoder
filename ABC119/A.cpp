#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char S[11];
    cin >> S;

    char A[9] = {'\0'};
    for(int i = 0; i < 4; i++){
        A[i] = S[i];
    }
    for(int i = 4; i < 6; i++){
        A[i] = S[i + 1];
    }
    for(int i = 6; i < 8; i++){
        A[i] = S[i + 2];
    }

    if(strcmp(A, "20190430") <= 0){
        cout << "Heisei";
    }
    else{
        cout << "TBD";
    }
    cout << endl;
}