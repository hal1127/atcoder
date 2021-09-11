#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;


int main()
{
  int n, m, Y, Z;
  cin >> n >> m >> Y >> Z;
  vector<char> c(m);
  vector<int> p(m);
  REP(i, m) {
    cin >> c.at(i) >> p.at(i);
  }
  string b;
  cin >> b;

  int mINF = -1e9;
  vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(1<<m, vector<int>(m, mINF)));

  dp.at(0).at(0).at(0) = 0;

  // 今注目しているブロック
  REP(t, n) {
    // tは何番目の色か
    int num = 0;
    REP(i, m) {
      if (c.at(i) == b.at(t)) {
        num = i;
        break;
      }
    }
    // どの色を使ったか
    // 000... から111... まで
    REP(i, 1<<m) {
      // 直前に使った色
      REP(j, m) {
        if (dp.at(t).at(i).at(j) == mINF) continue;
        // tを捨てたときの処理
        dp.at(t+1).at(i).at(j) = max(dp.at(t+1).at(i).at(j), dp.at(t).at(i).at(j));

        // 積み上げたときの処理
        // この処理であり得るパタンのみが選別できる
        int nexti = i | (1<<num);
        int nextpoint = dp.at(t).at(i).at(j);
        // 色ボーナスを足す
        nextpoint += p.at(num);
        // コンボボーナスを足す、i=0のときはどの色も使っていないので足さない
        if (i != 0 && j==num) nextpoint += Y;

        dp.at(t+1).at(nexti).at(num)
          = max(dp.at(t+1).at(nexti).at(num), nextpoint);
      }
    }
  }

  int ans = 0;
  // 全色ボーナスが発生しないパターン
  REP(i, 1<<m) {
    REP(j, m) {
      if (dp.at(n).at(i).at(j) == mINF) continue;
      ans = max(ans, dp.at(n).at(i).at(j));
    }
  }

  REP(j, m) {
    if (dp.at(n).at((1<<m)-1).at(j) == mINF) continue;
    ans = max(ans, dp.at(n).at((1<<m)-1).at(j) + Z);
  }
  cout << ans << endl;
}
