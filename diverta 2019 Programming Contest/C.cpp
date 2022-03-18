// 貪欲法
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
  vector<string> s(N);
  rep (i, 0, N) cin >> s[i];

  // c[0]: 先頭が'B'、末尾が'A'。
  // c[1]: 先頭が'B'。末尾が'A'でない。
  // c[2]: 先頭が'B'でない。末尾が'A'。
  vector<int> c(3);

  int ans = 0;
  rep (i, 0, N) {
    if (s[i][0] == 'B' && s[i][s[i].size()-1] == 'A') c[0]++;
    else if (s[i][0] == 'B') c[1]++;
    else if (s[i][s[i].size()-1] == 'A') c[2]++;
    rep (j, 0, s[i].size()-1) {
      if (s[i].substr(j, 2) == "AB") ans++;
    }
  }

  // c[1]とc[2]のどちらかがあるとき
  if ((c[1] + c[2]) != 0) {
    // c[0]がなければ、c[1]とc[2]で作る
    // oxoxABoxox
    if (c[0] == 0) ans += min(c[1], c[2]);
    // c[0]もあれば、もっと作れる
    // oxoxABoxoxABoxox
    else ans += min(c[1], c[2]) + c[0];
  } else {
    // c[0]しかなければ、それだけで作る
    // BoxoxABoxoxA
    ans += max(0, c[0] - 1);
  }

  cout << ans << endl;
}
