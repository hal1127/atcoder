// imos法、木
#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// edge、ノード間を結ぶ枝
vector<vector<int>> E;
// 各ノードの値
vector<int> val;

// 現在のノードの子ノードを回る
// cu: current 現在のノード, pa: parent 親のノード
void dfs(int cu, int pa)
{
  for (auto to : E.at(cu)) {
    // 自分の親には戻らないようにしている
    if (pa != to) {
      val.at(to) += val.at(cu);
      dfs(to, cu);
    }
  }
}

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> a(N-1), b(N-1);
  rep (i, 0, N-1) cin >> a.at(i) >> b.at(i);
  E = vector<vector<int>>(N);
  rep (i, 0, N-1) {
    E.at(a.at(i)-1).push_back(b.at(i)-1);
    E.at(b.at(i)-1).push_back(a.at(i)-1);
  }
  vector<int> p(Q), x(Q);
  rep (i, 0, Q) cin >> p.at(i) >> x.at(i);
  val = vector<int>(N);
  rep (i, 0, Q) {
    val.at(p.at(i)-1) += x.at(i);
  }

  dfs(0, -1);

  rep (i, 0, N) {
    if (i) cout << " ";
    cout << val.at(i);
  }
  cout << endl;
}
