#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define rrep(i, m, n) for (int i = m; i >= n; i--)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int h[3], w[3], ans = 0;
void dfs(int rc, int numpla[3][3])
{
  int r = rc / 3, c = rc % 3;

  if (r == 3) {
    ans++;
    return; // finish
  }
  if (r == 2) {
    int x = w[c] - numpla[0][c] - numpla[1][c];
    if (x <= 0) return;
    numpla[r][c] = x; dfs(rc + 1, numpla);
  } else if (c == 2) {
    int x = h[r] - numpla[r][0] - numpla[r][1];
    if (x <= 0) return;
    numpla[r][c] = x; dfs(rc + 1, numpla);
  } else {
    rep (x, 1, 31) {
      numpla[r][c] = x; dfs(rc + 1, numpla);
    }
  }
}

int main()
{
  rep (i, 0, 3) cin >> h[i];
  rep (i, 0, 3) cin >> w[i];

  if (h[0] + h[1] + h[2] != w[0] + w[1] + w[2]) {
    cout << 0 << endl;
    return 0;
  }
  int a[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  dfs(0, a);
  cout << ans << endl;
}
