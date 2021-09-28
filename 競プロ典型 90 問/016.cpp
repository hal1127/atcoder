#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  int A, B, C;
  cin >> N;
  cin >> A >> B >> C;

  int ans = 10000;
  rep(x, 0, 10000) {
    rep(y, 0, 10000) {
      ll tmp = 1LL * x * A + 1LL * y * B;
      if ((N - tmp) % C != 0 || tmp > N) continue;
      int z = (N - tmp ) / C;
      ans = min(ans, x + y + z);
    }
  }
  cout << ans << endl;
}
