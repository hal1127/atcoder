#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<vector<int>> town(4);

bool dfs(vector<bool> is_tototsu, int pos)
{
  bool is_clear = true;
  for (auto x : is_tototsu) {
    if (!x) {
      is_clear = false;
    }
  }
  if (is_clear) return true;

  for (auto t : town.at(pos)) {
    if (!is_tototsu.at(t)) {
      is_tototsu.at(t) = true;
      return dfs(is_tototsu, t);
    }
  }

  return false;
}

int main()
{
  vector<int> a(3), b(3);
  rep (i, 0, 3) {
    cin >> a.at(i) >> b.at(i);
  }
  rep (i, 0, 3) {
    town.at(a.at(i)-1).push_back(b.at(i)-1);
    town.at(b.at(i)-1).push_back(a.at(i)-1);
  }
  // rep (i, 0, 4) {
  //   cout << i << ": {";
  //   for (auto x: town.at(i)) {
  //     cout << x << ", ";
  //   }
  //   cout << "}" << endl;
  // }
  rep (s, 0, 4) {
    bool is_clear = dfs(vector<bool>(4, false), s);

    if (is_clear) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
}
