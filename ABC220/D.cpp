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
  vector<int> A(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }

  vector<vector<ll>> dp(N, vector<ll>(10, 0));
  dp.at(0).at(A.at(0)) = 1;

  ll MOD = 998244353;
  rep (i, 0, N-1) {
    rep (j, 0, 10) {
      dp.at(i+1).at((j+A.at(i+1)) % 10) += dp.at(i).at(j);
      dp.at(i+1).at((j*A.at(i+1)) % 10) += dp.at(i).at(j);
      dp.at(i+1).at((j+A.at(i+1)) % 10) %= MOD;
      dp.at(i+1).at((j*A.at(i+1)) % 10) %= MOD;
    }
  }
  rep (i, 0, 10) {
    cout << dp.at(N-1).at(i)<< endl;
  }
}
