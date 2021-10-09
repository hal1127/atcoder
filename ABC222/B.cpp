#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, P;
  cin >> N >> P;
  vector<int> a(N);
  rep (i, 0, N) {
    cin >> a.at(i);
  }

  int ans = 0;
  rep (i, 0, N) {
    if (a.at(i) < P) ans++;
  }
  cout << ans << endl;
}
