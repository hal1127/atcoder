#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int K;
  cin >> K;

  if (K % 9 != 0) {
    cout << 0 << endl;
    return 0;
  }

  int MOD = 1e9+7;

  vector<int> dp(K+1, 0);
  dp.at(0) = 1;
  rep (i, 1, K+1) {
    int B = min(i, 9);
    rep (j, 1, B+1) {
      dp.at(i) += dp.at(i - j);
      dp.at(i) %= MOD;
    }
  }

  cout << dp.at(K) << endl;
}
