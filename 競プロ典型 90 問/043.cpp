#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// 現在の状態
struct state {
  // r, c, dir: 方向(direction)
  int r, c, dir;
};

// sr: スタートの行, sc: スタートの列
// gr: 目標の行, gc: 目標の列
int H, W, sr, sc, gr, gc;

vector<string> S;
// この地点での移動コスト
vector<vector<vector<int>>> dist;

bool is_ok(int r, int c, int cost, int dir)
{
  return 0 <= r && r < H && 0 <= c && c < W
          && S.at(r).at(c) == '.'
          // 移動後のコストが移動先の地点のコストより小さい場合のみ移動する
          && dist.at(r).at(c).at(dir) > cost;
}

void print_dist()
{
  rep (i, 0, H) {
    rep (j, 0, W) {
      cout << "[";
      rep (k, 0, 4) {
        int cost = dist.at(i).at(j).at(k);
        if (cost == INF) {
          cout << "INF, ";
        } else {
          printf("%3d, ", cost);
        }
      }
      cout << "] ";
    }
    cout << endl;
  }
}

int main()
{
  cin >> H >> W;
  cin >> sr >> sc >> gr >> gc;
  sr--; sc--; gr--; gc--;

  S.resize(H);
  rep (i, 0, H) {
    cin >> S.at(i);
  }

  dist.resize(H, vector<vector<int>>(W, vector<int>(4, INF)));
  deque<state> deq;
  rep (i, 0, 4) {
    dist.at(sr).at(sc).at(i) = 0;
    deq.push_back({sr, sc, i});
  }
  // delta = {上, 右, 下, 左}
  vector<int> dr = {1, 0, -1, 0}, dc = {0, 1, 0, -1};
  while (!deq.empty()) {
    state q = deq.front(); deq.pop_front();
    // i: 方向
    rep (i, 0, 4) {
      // 次に進む座標
      int tr = q.r + dr.at(i), tc = q.c + dc.at(i);
      // 方向を向いたときのコスト
      int cost = dist.at(q.r).at(q.c).at(q.dir) + (q.dir == i ? 0 : 1);
      // 埋めたほうが綺麗なので、一応埋めとく
      // if (dist.at(q.r).at(q.c).at(i) == INF) {
      //   dist.at(q.r).at(q.c).at(i) = cost;
      // }
      if (is_ok(tr, tc, cost, i)) {
        dist.at(tr).at(tc).at(i) = cost;
        if (q.dir == i) deq.push_front({tr, tc, i});
        else deq.push_back({tr, tc, i});
      }
    }
  }

  print_dist();

  int ans = INF;
  rep (i, 0, 4) ans = min(ans, dist.at(gr).at(gc).at(i));
  cout << ans << endl;
}
/*
4 7
1 2
4 2
#......
..####.
.#####.
.......
*/
