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
  vector<int> A(N), B(N);
  rep (i, 0, N) cin >> A[i] >> B[i];

  ll ans = 0;
  rep (i, 0, N) {
    ans += (1LL * A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
  }
  cout << ans << endl;
}
