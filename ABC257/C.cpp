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
  string S;
  cin >> S;
  vector<int> W(N);
  rep (i, 0, N) cin >> W[i];

  vector<pair<int, int>> WS(N);
  rep (i, 0, N) WS[i] = make_pair(W[i], S[i] - '0');

  // ソートの仕方を工夫
  // 同じW[i]が続く中で、端より大きいxが生まれないようにしている
  sort(all(WS), [](pair<int, int> l, pair<int, int> r) { return make_pair(l.first, -l.second) < make_pair(r.first, -r.second); });

  int count_adult = 0;
  rep (i, 0, N) count_adult += WS[i].second;

  int ans = count_adult;
  int x = count_adult;
  rep (i, 0, N) {
    if (WS[i].second == 0) x++;
    else x--;
    // ソートの仕方を工夫したので、以下の部分が省略可能。
    // if (i < (N - 1)) {
    //   if (WS[i].first != WS[i + 1].first) ans = max(ans, x);
    // } else ans = max(ans, x);
    ans = max(ans, x);
  }

  cout << ans << endl;
}
