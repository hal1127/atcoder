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
  string S;
  cin >> S;

  int mod = 1e9+7;

  // dp[pos][atcoder_pos] = dp[pos-1][atcoder_pos] + dp[pos-1][atcoder_pos-1]
  // Sのpos時点でのatcoderの何文字目までの通り数
  vector<vector<int>> dp(N+1, vector<int>(8));
  dp.at(0).at(0) = 1;

  string T = "atcoder";
  // i: Sのpos
  rep (i, 0, S.size()) {
    // j: atcoderの何文字目か
    for (int j = 0; j <= 7; j++) {
      // 前の通り数を引き継ぐ
      dp.at(i+1).at(j) += dp.at(i).at(j);
      // atcoderのj番目の文字とSのi番目が同じなら
      if (j <= 6 && S.at(i) == T.at(j)) {
        dp.at(i+1).at(j+1) += dp.at(i).at(j);
      }
    }
    for (int j = 0; j <= 7; j++) dp.at(i+1).at(j) %= mod;
  }

  cout << dp.at(S.size()).at(7) << endl;
}
