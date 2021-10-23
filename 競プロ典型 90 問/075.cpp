#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll N;
  cin >> N;

  ll t = N, p = 0;
  for (ll i = 2; i*i <= N; i++) {
    while (t % i == 0) {
      t /= i;
      p++;
    }
  }
  if (t != 1LL) p++;
  ll ans = 0, power = 1;
  while (p > power) {
    ans++;
    power *= 2;
  }
  cout << ans << endl;
}
