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
  vector<ll> A(N);
  rep (i, 0, N) cin >> A.at(i);

  ll ans = 0;
  rep (i, 1, N) {
    if (A.at(i) < A.at(i-1)) {
      ans += A.at(i-1) - A.at(i);
      A.at(i) = A.at(i-1);
    }
  }

  // rep (i, 0, N) cout << A.at(i) << " ";
  // cout << endl;
  cout << ans << endl;
}
