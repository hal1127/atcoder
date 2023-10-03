#include<iostream>
#include<vector>


#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    ll n; cin >> n;
    vector<ll> D(n); 
    ll Max = 0;
    rep(i, n){cin >> D[i]; Max = max(Max, D[i]);}

    vector<ll> C(Max + 1); 
    rep(i, n) C[D[i]]++;

    if(C[0] != 1 || D[0] != 0){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    ll tmp = 998244353;
    for(int i = 0; i < Max; i++){
        for(int j = 0; j < C[i + 1]; j++){
            ans *= C[i];
            ans %= tmp;
        }
    }
    cout << ans << endl;
}