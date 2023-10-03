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
  rep (i, 0, M) {
    cin >> a.at(i) >> b.at(i);
  }

  vector<int> G(N, 0);
  rep (i, 0, M) {
    int g = max(a.at(i), b.at(i));
    G.at(g-1)++;
  }

  int ans = 0;
  rep (i, 0, N) {
    if (G.at(i) == 1) ans++;
  }
  cout << ans << endl;
}