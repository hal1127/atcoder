// 🍊
#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

unsigned long long L, R, MOD = 1e9 + 7;

unsigned long long pow10(int n)
{
  unsigned long long p = 1;
  rep (i, 0, n) {
    p *= 10ULL;
    p %= MOD;
  }
  return p;
}

unsigned long long calc_sum(unsigned long long i)
{
  return (1ULL * (i+1) / 2 * i) % MOD;
}

unsigned long long digit_sum(int i)
{
  unsigned long long vl = calc_sum(max(pow10(i-1), L) - 1ULL);
  unsigned long long vr = calc_sum(min(pow10(i)-1, R));

  unsigned long long ret = vr - vl;

  return max(ret, 0ULL);
}

int main()
{
  cin >> L >> R;

  unsigned long long ans = 0;
  rep (i, 1, 20) {
    ans += digit_sum(i) % MOD;
    ans %= MOD;
  }

  cout << ans << endl;
}
