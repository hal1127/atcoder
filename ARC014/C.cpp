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
  cin >> N;
  cin >> S;

  if (N > 15) return 0;


  int ans = 999;
  REP(i, 1 << N) {
    string balls = "";
    REP(j, N) {
      if (balls.size() == 0) {
        balls = S.at(j);
      }else if ((i >> j) & 1) {
        if (balls.at(0) == S.at(j)) {
          balls.erase(balls.begin());
        } else {
          balls.insert(balls.begin(), S.at(j));
        }
      } else {
        if (balls.at(balls.size()-1) == S.at(j)) {
          balls.pop_back();
        } else {
          balls.push_back(S.at(j));
        }
      }
    }
    ans = min(ans, (int)balls.size());
  }
  cout << ans << endl;
}
