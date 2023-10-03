#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll N, X;
  cin >> N;
  vector<ll> A(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }
  cin >> X;

  ll asum = 0;
  rep (i, 0, A.size()) {
    asum += A.at(i);
  }
  ll l = X / asum * A.size();
  ll x = X / asum * asum;
  for (ll i = l; true; i++) {
    x += A.at(i % A.size());
    if (x > X) {
      cout << i+1 << endl;
      return 0;
    }
  }
}
