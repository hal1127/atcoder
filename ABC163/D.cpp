#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<ll> dp(2e5+1, 0);
ll kaijo(ll n){
  if (n == 1) {
    return 1;
  }
  if (dp.at(n) != 0) {
    return dp.at(n);
  }
  ll k = 1;
  k *= (kaijo(n-1) * n)%(ll)(1e9 + 7);
  
  return dp.at(n) = k;
}

int main()
{
  ll N, K;
  cin >> N >> K;
  N %= (ll)(1e9 + 7);
  K %= (ll)(1e9 + 7);
  ll ans = 0;
  for(ll i=K; i < N+1; i++) {
    ans += kaijo(N+1)/(kaijo(N+1-i)*kaijo(i));
  }
  cout << max(ans, (ll)1) << endl;
}
