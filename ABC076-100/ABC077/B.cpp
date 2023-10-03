#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    ll n; cin >> n;

    ll i;
    for(i = 1; i * i < n; i++){

    }

    cout << ((i * i == n) ? i * i : (i - 1) * (i - 1)) << endl;
}