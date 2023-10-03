#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> a(N), b(N);
  rep (i, 0, N) cin >> a.at(i) >> b.at(i);

  // dp[i][j]: i回目のジャンプでjに到達できるか
  vector<bitset<10001>> dp(N+1);
  dp.at(0).set(0);

  rep (i, 0, N) {
    rep (j, 0, X+1) {
      // i回目のジャンプ後にjに到達しているか
      if (dp.at(i)[j]) {
        if ((j+a.at(i)) <= X)
          dp.at(i+1).set(j+a.at(i));
        if ((j+b.at(i)) <= X)
          dp.at(i+1).set(j+b.at(i));
      }
    }
  }
  // N回のジャンプ後にXに到達していれば
  if (dp.at(N)[X]) cout << "Yes" << endl;
  else cout << "No" << endl;
}
