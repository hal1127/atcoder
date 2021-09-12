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
  vector<int> A(N);
  vector<int> B(N);
  REP(i, N) {
    cin >> A.at(i) >> B.at(i);
  }

  int ans = INF;
  REP(i, N) {
    REP(j, N) {
      if (i == j) {
        ans = min(ans, A.at(i)+B.at(i));
      } else {
        ans = min(ans, max(A.at(i), B.at(j)));
        ans = min(ans, max(A.at(j), B.at(i)));
      }
    }
  }
  cout << ans << endl;
}
