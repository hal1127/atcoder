#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    ll n, a;   cin >> n;

    int m = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            a = i;
        }
    }

    cout << a + (n / a) - 2 << endl;
}