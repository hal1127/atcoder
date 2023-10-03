#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N;
vector<int> x(100), y(100), h(100);

int main()
{
  cin >> N;
  rep(i, 0, N) cin >> x[i] >> y[i] >> h[i];

  // Cx, Cyを全探索
  rep (cx, 0, 101) rep (cy, 0, 101) {
    int H;
    // cx, cyが正しい中心座標であれば、iの値に関わらずHは同じ数値になるはずである
    // h[i]が0のものは使えない
    rep (i, 0, N) if (h[i]) H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
    bool ok = true;
    rep (i, 0, N) if (max(H - abs(cx - x[i]) - abs(cy - y[i]), 0) != h[i]) ok = false;
    if (ok) {
      printf("%d %d %d\n", cx, cy, H);
      return 0;
    }
  }
}
