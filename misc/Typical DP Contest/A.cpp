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
  int N;
  cin >> N;
  vector<int> p(N);
  REP(i, N) {
    cin >> p.at(i);
  }
  int M = 100;
  vector<vector<bool>> dp(N, vector<bool>(N * M + 1, false));
  dp.at(0).at(0) = true;
  dp.at(0).at(p.at(0)) = true;
  FOR(i, 1, N) {
    REP(j, N * M + 1) {
      if (dp.at(i-1).at(j)) {
        dp.at(i).at(j) = true;
        dp.at(i).at(j + p.at(i)) = true;
      }
    }
  }

  int ans = 0;
  REP(i, N * M + 1) {
    if (dp.at(N-1).at(i)) {
      ans++;
    }
  }

  cout << ans << endl;
}
