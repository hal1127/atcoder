// 木
#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> a(M), b(M);
  rep (i, 0, M) cin >> a[i] >> b[i];

  // edge
  set<pair<int, int>> E;
  rep (i, 0, M) {
    E.insert({a[i]-1, b[i]-1});
    E.insert({b[i]-1, a[i]-1});
  }

  rep (i, 1, N-1) {
    if (E.count({0, i}) && E.count({i, N-1})) {
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }

  cout << "IMPOSSIBLE" << endl;
}
