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
  REP(i, N) {
    cin >> A.at(i);
  }

  int ans = 0;
  REP(i, N) {
    int x = A.at(i);
    FOR(j, i, N) {
      x = min(x, A.at(j));
      ans = max(x*(j-i+1), ans);
      // printf("%d %d %lld => %lld\n", i+1, j+1, x, ans);
    }
  }

  cout << ans << endl;
}