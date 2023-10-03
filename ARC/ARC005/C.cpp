#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int H, W;

bool ok(int y, int x)
{
  return y >= 0 && x >= 0 && y < H && x < W;
}

int main()
{
  cin >> H >> W;
  vector<string> c(H);
  REP(i, H) {
    cin >> c.at(i);
  }

  int fx = -1;
  int fy = -1;
  REP(i, H) {
    fy = i;
    if (c.at(i).find('s') != -1) {
      fx = c.at(i).find('s');
      break;
    }
  }
  // printf("fx=%d, fy=%d\n", fx, fy);

  // 現在位置
  queue<pair<int, int>> nowq;
  nowq.push(make_pair(fy, fx));

  // 移動先の列挙
  vector<pair<int, int>> vel = {make_pair(0, 1), make_pair(1, 0), make_pair(0, -1), make_pair(-1, 0)};

  // 調査済みか
  vector<vector<bool>> check(H, vector<bool>(W));
  check.at(fy).at(fx) = true;

  // 幅優先探索を3回する
  REP(i, 3) {
    // 後回し用。壁を入れるキューを用意
    queue<pair<int, int>> nextq;

    while(!nowq.empty()) {
      pair<int, int> now = nowq.front();
      nowq.pop();
      int y = now.first;
      int x = now.second;

      // 4方向に移動できるので、それぞれの移動先を調べる
      for (auto v : vel) {
        int ny = y + v.first;
        int nx = x + v.second;

        // 範囲内 && 調べていないマス なら
        if (ok(ny, nx) && !check.at(ny).at(nx)) {
          // 調査済みフラグを立てる
          check.at(ny).at(nx) = true;

          // ゴールなら終了
          if (c.at(ny).at(nx) == 'g') {
            cout << "YES" << endl;
            return 0;
          // 壁は後回し
          } else if (c.at(ny).at(nx) == '#') {
              nextq.push(make_pair(ny, nx));
          // それ以外なら通常のキューに入れる
          } else {
            nowq.push(make_pair(ny, nx));
          }
        }
      }
    }
    // この時点でnowqは空の状態
    // 後回しにした壁のキューを移す
    nowq =nextq;
  }
  cout << "NO" << endl;
}