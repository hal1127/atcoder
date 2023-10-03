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
  vector<int> A(N);
  rep (i, 0, N) cin >> A.at(i);

  double ans = 0;
  rep (i, 0, N) ans += 1.0/A.at(i);
  ans = 1.0/ans;
  
  printf("%.10f\n", ans);
}
