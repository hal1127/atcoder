#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

string s;
int N;

pair<int, int> solve()
{
  // 2文字の場合は別個で考える
  if (N == 2) {
    if (s[0] == s[1]) return make_pair(1, 2);
    else return make_pair(-1, -1);
  }

  // 文字の種類とその個数を数える
  map<char, int> m;
  // 3文字の部分文字列のみを考えてば良い
  rep (i, 0, 3) {
    m[s[i]]++;
  }

  int r = 2;
  rep (l, 0, N-3) {
    if (m.size() == 2) return make_pair(l+1, r+1);

    m[s[l]]--;
    if (m[s[l]] == 0) m.erase(s[l]);
    m[s[++r]]++;
  }

  return make_pair(-1, -1);
}

int main()
{
  cin >> s;
  N = s.size();

  auto ans = solve();
  cout << ans.first << " " << ans.second << endl;
}
