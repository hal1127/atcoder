#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;


int main()
{
  ll MOD = 998244353;
  ll N;
  cin >> N;

  ll l = 1;
  ll ans = 0;
  // [l, r)
  while (true) {
    if (N < l) break;
    ll r = min(l*10, N+1);

    // printf("[%lld, %lld)\n", l, r);

    // 1, 2,... 9
    // 1/2 * (項数) * (初項 + 末項)
    ans += ((r-l) % MOD) * ((1 + r-l) % MOD) / 2LL;

    l *= 10;
    ans %= MOD;

    // cout << ans << endl;
  }

  cout << ans << endl;
}
