#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int X;
  cin >> X;

  // DP
  vector<bool> dp(100110);
  dp[0] = true;
  rep (i, 0, X) {
    rep (j, 0, 6) {
      int money = i + 100 + j;
      if (dp[i]) dp[money] = true;
    }
  }

  cout << dp[X] << endl;
}
