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
  string S;
  cin >> N >> S;

  // マスiにたどり着くために水たまりを踏む最小値
  vector<int> dp(N, 0);
  FOR(i, 1, N) {
    int puddle = 999;
    FOR(j, 1, 4) {
      if (i < j) break;
      puddle = min(puddle, dp.at(i-j));
    }
    dp.at(i) = puddle;
    if (S.at(i) == 'X') dp.at(i)++;
  }
  cout << dp.at(N-1) << endl;
}
