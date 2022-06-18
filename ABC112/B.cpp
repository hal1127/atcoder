#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, T;
  cin >> N >> T;
  vector<int> c(N), t(N);
  rep (i, 0, N) {
    cin >> c[i] >> t[i];
  }

  int min_c = INF;
  rep (i, 0, N) {
    if (t[i] > T) continue;
    min_c = min(min_c, c[i]);
  }

  if (min_c == INF) {
    cout << "TLE" << endl;
  } else {
    cout << min_c << endl;
  }
}
