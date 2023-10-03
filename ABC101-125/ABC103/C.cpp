#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<ll> a(N);
  rep (i, 0, N) {
    cin >> a[i];
  }

  // 最小公倍数でもできるが、オーバーフロー...
  // 最小公倍数
  ll m = lcm(a[0], a[1]);
  rep (i, 2, N) {
    m = lcm(m, a[i]);
  }

  ll mod_sum = 0;
  rep (i, 0, N) {
    mod_sum += (m - 1) % a[i];
  }
  cout << mod_sum << endl;

  // これでいける
  // sum(a) - N
  // cout << accumulate(all(a), 0, [](ll a, ll b) { return a + b; }) - N << endl;
}