#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep (i, 0, N) cin >> A[i];

  // 1周して戻ってくることも考えて，2周分の距離を考える
  vector<int> B;
  rep (i, 0, N) B.push_back(A[i]);
  rep (i, 0, N) B.push_back(A[i] + K);

  int ans = INF;
  rep (i, 0, N) ans = min(ans, B[i+N-1] - B[i]);

  cout << ans << endl;
}
