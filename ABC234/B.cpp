#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  rep (i, 0, N) {
    cin >> x.at(i) >> y.at(i);
  }

  double ans = -1;
  rep (i, 0, N) {
    rep (j, i+1, N) {
      ll dx = x.at(i)-x.at(j);
      ll dy = y.at(i)-y.at(j);
      ans = max(ans, sqrt(dx*dx + dy*dy));
    }
  }

  printf("%.10f\n", ans);
}
