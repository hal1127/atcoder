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
  vector<int> A(N), B(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }
  rep (i, 0, N) {
    cin >> B.at(i);
  }

  vector<map<int, int>> dp(N);
  rep (i, 0, N) {
    rep (j, A.at(i), B.at(i)+1) {
      dp.at(i)[j] = 0;
    }
  }

  rep (i, A.at(0), B.at(0)+1) {
    dp.at(0).at(i) = 1;
  }

  int MOD = 998244353;
  rep (i, 1, N) {
    for (auto x : dp.at(i-1)) {
      for (auto &y : dp.at(i)) {
        if (x.first < y.first) {
          y.second += x.second;
          y.second %= MOD;
        }
      }
    }
  }

  int ans = 0;
  for (auto x : dp.at(N)) {
    ans += x.second;
    ans %= MOD;
  }
  cout << ans << endl;
}
