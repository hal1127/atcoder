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
  vector<int> v(N);
  rep (i, 0, N) cin >> v.at(i);

  sort(all(v));
  double ans = v.at(0);
  rep (i, 1, N) {
    ans += v.at(i);
    ans /= 2;
  }

  printf("%.10f\n", ans);
}
