#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int n;  cin >> n;
    int check = 0;

    for(int i = 1; i <= 9; i++){
        if(n % i == 0 && n / i < 10){
            check = 1;
            break;
        }
    }
    if(check == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << endl;
}