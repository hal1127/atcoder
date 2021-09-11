#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<int> dp(100, -1);
int dfs(int pos, string s)
{
  if (pos >= s.size()) return 100;
  if (pos == s.size()-1) return 0;
  if (dp.at(pos) != -1) return dp.at(pos);

  int ret = 100;
  for (int i = 1; i < 4; i++) {
    if (s.at(pos) == 'X') ret = min(ret, dfs(pos+i, s) + 1);
    else ret = min(ret, dfs(pos+i, s));
  }
  return dp.at(pos) = ret;
}

int main()
{
  int N;
  string S;
  cin >> N >> S;

  cout << dfs(0, S) << endl;
}
