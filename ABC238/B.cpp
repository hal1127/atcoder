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

  vector<int> B(N+1);
  rep (i, 0, N) {
    B.at(i+1) = B.at(i) + A.at(i);
    if (B.at(i+1) > 360) B.at(i+1) -= 360;
  }
  sort(all(B));
  B.push_back(360);
  // rep (i, 0, N+2) printf("%d %d\n", i, B.at(i));
  // rep (i, 1, N+2) cout << B.at(i) - B.at(i-1) << endl;
  vector<int> C(N+1);
  int ans = 0;
  rep (i, 1, N+2) {
    ans = max(ans, B.at(i) - B.at(i-1));
  }
  cout << ans << endl;

}
