#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int H, W;
vector<string> c;

vector<vector<bool>> used;
vector<int> DX = {1, -1, 0, 0};
vector<int> DY = {0, 0, 1, -1};

int is_ok(int nx, int ny)
{
  return nx >= 0 && ny >= 0
        && nx < W && ny < H
        && c.at(ny).at(nx) == '.';
}

// sx, sy: スタート位置
// px, py: 現在位置
int dfs(int sx, int sy, int px, int py)
{
  // スタート位置に戻ったら終了
  // ここを0として戻りながらループの長さを数える
  if (sx == px && sy == py && used.at(py).at(px)) return 0;

  // 使用済みにする
  used.at(py).at(px) = true;

  int ret = INT_MIN;
  rep (i, 0, 4) {
    int dx = DX.at(i), dy = DY.at(i);
    // nx, ny: 移動先
    int nx = px + dx, ny = py + dy;
    if (!is_ok(nx, ny)) continue;
    // 使用済みのときは移動しない(スタート位置は例外)
    if ((sx != nx || sy != ny) && used.at(ny).at(nx)) continue;
    int v = dfs(sx, sy, nx, ny);
    ret = max(ret, v+1);
  }
  // 終わったら未使用に戻す
  used.at(py).at(px) = false;
  return ret;
}

int main()
{
  cin >> H >> W;
  c.resize(H);
  used.resize(H, vector<bool>(W, false));
  rep (i, 0, H) {
    cin >> c.at(i);
  }

  int ans = -1;
  rep (y, 0, H) {
    rep (x, 0, W) {
      ans = max(ans, dfs(x, y, x, y));
    }
  }

  if (ans <= 2) ans = -1;
  cout << ans << endl;
}