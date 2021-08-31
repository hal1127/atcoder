#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// 誰宛ての手紙が誰に届いたかを全列挙する
// 全て間違えることができた数を返す。
int dfs(int pos, vector<bool> used, int remain)
{
  int res = 0;
  // 全員に配り終わった
  if (pos == (int)used.size()) {
    // ちょうど間違えられた。成功
    if (remain == 0) {
      return 1;
    // 間違った残りが0でない場合は失敗
    } else {
      return 0;
    }
  }

  REP(i, (int)used.size()) {
    // 手紙が使われていなければ使う
    if (!used.at(i)) {
      // 使うのでusedをtrue
      used.at(i) = true;
      // usedが渡す人の手紙でなければremainを-1
      if (pos != i) {
        res += dfs(pos+1, used, remain-1);
      } else {
        res += dfs(pos+1, used, remain);
      }
      // usedは終わるときに戻しておく
      used.at(i) = false;
    }
  }

  return res;
}

int main()
{
  ll N, K;
  cin >> N >> K;
  if (N > 8) return 0;
  vector<bool> used(N, false);
  cout << dfs(0, used, K) << endl;
}
