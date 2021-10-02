#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// Input
int N;
vector<int> A, B;

// グラフ
vector<vector<int>> G;
// グラフの頂点の色(0, 1)
vector<int> col;

void dfs(int pos, int cur)
{
  col.at(pos) = cur;
  for (int x : G.at(pos)) {
    if (col.at(x) != -1) continue;
    dfs(x, 1-cur);
  }
}

int main()
{
  cin >> N;
  A.resize(N); B.resize(N);
  G.resize(N+1); col.resize(N+1, -1);
  rep(i, 1, N) {
    cin >> A.at(i) >> B.at(i);
    G.at(A.at(i)).push_back(B.at(i));
    G.at(B.at(i)).push_back(A.at(i));
  }

  dfs(1, 0);

  vector<int> G0, G1;
  rep (i, 1, N+1) {
    if (col.at(i) == 0) G0.push_back(i);
    if (col.at(i) == 1) G1.push_back(i);
  }
  if (G0.size() > G1.size()) {
    rep(i, 0, N / 2) {
      cout << G0.at(i) << " ";
    }
  } else {
    rep(i, 0, N / 2) {
      cout << G1.at(i) << " ";
    }
  }
  cout << endl;
}
