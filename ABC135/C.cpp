#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int n;  cin >> n;
    int a[n + 1];   rep(i, n + 1) cin >> a[i];
    int b[n];   rep(i, n) cin >> b[i];
    ll ans = 0;
    int kill;

    for(int i = 0; i < n; i++){
        kill = min(a[i], b[i]);
        b[i] -= kill;
        ans += kill;

        if(b[i] > 0){
            kill = min(a[i + 1], b[i]);
            a[i + 1] -= kill;
            ans += kill;
        }
    }

    cout << ans << endl;
}