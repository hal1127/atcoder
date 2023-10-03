#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double X[n];
    char U[4][n];
    for(int i = 0; i < n; i++){
        cin >> X[i] >> U[i];
    }
    
    double ans = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(U[i], "JPY") == 0){
            ans += X[i];
        }
        else{
            ans += X[i] * 380000.0;
        }
    }

    cout << fixed;
    cout << ans << endl;
}