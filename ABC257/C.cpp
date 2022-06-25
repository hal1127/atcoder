#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<int> W(200000);

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  rep (i, 0, N) cin >> W[i];

  vector<int> indexes(N);
  rep (i, 0, N) indexes[i] = i;
  sort(all(indexes), [](int l, int r) { return W[l] < W[r]; });

  vector<int> sorted_W(N);
  rep (i, 0, N) sorted_W[i] = W[indexes[i]];

  vector<char> sorted_S(N);
  rep (i, 0, N) sorted_S[i] = S[indexes[i]];

  vector<int> dp(N);
  int count_adult = 0;
  rep (i, 0, N) if (S[i] == '1') count_adult++;

  dp[0] = count_adult;
  if (sorted_S[0] == '0') dp[0]++;
  else dp[0]--;
  rep (i, 1, N) {
    if (sorted_S[i] == '0') dp[i] = dp[i - 1] + 1;
    else dp[i] = dp[i - 1] - 1;
  }

  // rep (i, 0, N) {
  //   if (i) cout << ' ';
  //   cout << sorted_S[i];
  // }

  // cout << endl;
  // rep (i, 0, N) {
  //   if (i) cout << ' ';
  //   cout << sorted_W[i];
  // }
  // cout << endl;

  // rep (i, 0, N) {
  //   if (i) cout << ' ';
  //   cout << dp[i];
  // }
  // cout << endl;

  int ans = count_adult;
  rep (i, 1, N) if (sorted_W[i - 1] != sorted_W[i]) ans = max(ans, dp[i - 1]);
  ans = max(ans, dp[N - 1]);

  cout << ans << endl;
}
