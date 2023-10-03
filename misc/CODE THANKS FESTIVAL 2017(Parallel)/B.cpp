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
  string S;
  string Srev;
  cin >> S;

  REP(i, S.size()) {
    Srev = S.substr(i);
    reverse(Srev.begin(), Srev.end());
    // 前の数文字を消した文字列が回文か
    if (S.substr(i) == Srev) {
      // 消した文字列を後ろにつけると回文になる
      cout << i;
      return 0;
    }
  }
}