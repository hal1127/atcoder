#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N;
vector<vector<int>> A;

int main()
{
  cin >> N;
  A.resize(N, vector<int>(6));
  rep (i, 0, N) {
    rep (j, 0, 6) {
      cin >> A.at(i).at(j);
    }
  }

  ll ans = 1;
  rep (i, 0, N) {
    ans *= accumulate(all(A.at(i)), 0);
    ans %= (ll)1e9+7;
  }
  cout << ans << endl;
}