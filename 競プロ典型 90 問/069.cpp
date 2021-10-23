#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll N, K;
  cin >> N >> K;

  int MOD = 1e9+7;

  if (K == 1) {
    cout << (N == 1 ? 1 : 0) << endl;
  } else if (N == 1) {
    cout << 1LL * K % MOD << endl;
  } else if (N == 2) {
    cout << 1LL * K * (K-1) % MOD << endl;
  } else {
    ll ans = 1LL * K * (K - 1) % MOD;
    ll p = N - 2;
    ll a = K - 2;
    while (p > 0) {
      // if (p % 2 == 1) {
      if (p & 1 != 0) {
        ans = 1LL * ans * a % MOD;
      }
      a = 1LL * a * a % MOD;
      // p /= 2;
      p = p >> 1;
    }
    cout << ans << endl;
  }
}
