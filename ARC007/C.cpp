#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

void print_bin (int bin)
{
  REPR(i, log2(bin)) {
    cout << ((bin >> i) & 1);
  }
  cout << endl;
}

int main()
{
  string c;
  cin >> c;

  int b = 0;

  REP(i, c.size()) {
    if (c.at(i) == 'o') {
      b += (1 << (c.size()-i-1));
    }
  }
  int ans = 999;

  REP(i, pow(2, c.size())) {
    // テレビがどのタイミングでついているか
    int t = 0;
    // 設置したテレビの個数
    int cnt = 0;
    REP(j, c.size()) {
      // j桁目が1なら
      if ((i >> j) & 1) {
        // j桁ずらしてテレビを設置
        t |= b << j;
        // リピートするので
        t |= (b << j) >> c.size();
        cnt++;
      }
    }
    // 周期分の桁だけ取り出す
    t &= ((int)pow(2, c.size())-1);
    // テレビがどのタイミングでもついていればansと比較する
    if (t == pow(2, c.size())-1) {
      ans = min(ans, cnt);
    }
  }
  cout << ans << endl;
}
