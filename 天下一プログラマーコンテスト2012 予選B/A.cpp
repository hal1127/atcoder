#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> ans;
  FOR(i, 1, 128) {
    if (i % 3 == a &&
        i % 5 == b &&
        i % 7 == c ) {
      ans.push_back(i);
    }
  }

  for (auto x : ans) {
    cout << x << endl;
  }
}