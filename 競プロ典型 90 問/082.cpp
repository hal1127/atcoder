#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

unsigned long long L, R;
ll MOD = 1e9 + 7;

unsigned long long pow10(int n)
{
  unsigned long long p = 1;
  rep (i, 0, n) {
    p *= 10;
    p %= MOD;
  }
  return p;
}

unsigned long long arith_sum(unsigned long long i)
{
  return (1ULL * (i+1) / 2 * i) % MOD;
}

unsigned long long digit_sum(int i)
{
  unsigned long long ret = arith_sum(min(pow10(i)-1, R)) - arith_sum(max(pow10(i-1), L) - 1);

  return max(ret, 0ULL);
}

int main()
{
  cin >> L >> R;

  unsigned long long ans = 0;
  rep (i, 1, 4) {
    ans += digit_sum(i) % MOD;
  }

  cout << ans << endl;
}
