#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int a, b;   cin >> a >> b;

    if(a < 10 && b < 10){
        cout << a * b;
    }
    else{
        cout << -1;
    }
    cout << endl;
}