#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    ll n; cin >> n;

    if(n % 2) n++;
    else ;

    cout << n / 2 - 1 << endl;
}