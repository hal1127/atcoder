#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll pow1000ll(ll n)
{
  ll ret = 1;
  rep(i, 0, n) {
    ret *= 1000;
  }
  return ret;
}

int log1000 (ll n)
{
  return  (int)(log(n) / log(1000));
}

int main()
{
  ll N;
  cin >> N;

  // cout << log1000(N) << endl;
  ll ans = 0;
  for (ll i = 0; i <= log1000(N); i++) {
    ll l = pow1000ll(i);
    ll r = min(pow1000ll(i+1)-1, N);
    // printf("i = %lld, l = %lld, r = %lld\n", i, l, r);
    ans += (r-l+1) * i;
  }

  cout << ans << endl;
}
