#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N;
// グラフ
vector<vector<int>> G;
vector<int> dist;

// 幅優先探索と動的計画法でstartからの最短距離を計算する
void get_dist(int start)
{
  dist = vector<int>(N+1, INF);

  queue<int> q;
  q.push(start);
  dist.at(start) = 0;

  while (!q.empty()) {
    // 現在位置
    int pos = q.front(); q.pop();

    // 現在位置から到達できる位置を全列挙
    for (int to : G.at(pos)) {
      // 移動先が未到達なら
      if (dist.at(to) == INF) {
        // 移動先の距離は現在位置の距離+1になる
        dist.at(to) = dist.at(pos) + 1;
        // 移動先を現在位置のキューに追加
        q.push(to);
      }
    }
  }
}

int main()
{
  cin >> N;
  vector<int> A(N-1);
  vector<int> B(N-1);
  rep(i, 0, N-1) {
    cin >> A.at(i) >> B.at(i);
  }

  G = vector<vector<int>>(N+1);
  // ノードからつながるノードの配列
  rep(i, 0, N-1) {
    G.at(A.at(i)).push_back(B.at(i));
    G.at(B.at(i)).push_back(A.at(i));
  }

  get_dist(1);
  int max_node1 = -1, max_dist1 = -1;
  for (int i = 1; i <= N; i++) {
    if (max_dist1 < dist.at(i)) {
      max_dist1 = dist.at(i);
      max_node1 = i;
    }
  }

  get_dist(max_node1);
  int max_dist2 = -1;
  for (int i = 1; i <= N; i++) {
    max_dist2 = max(max_dist2, dist.at(i));
  }

  cout << max_dist2 + 1 << endl;
}
