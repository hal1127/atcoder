#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> l(N);
  rep (i, 0, N) cin >> l.at(i);

  sort(all(l));
  reverse(all(l));

  int ans = 0;
  rep (i, 0, K) ans += l.at(i);

  cout << ans << endl;
}
