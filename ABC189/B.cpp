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
  ll N, X;
  cin >> N >> X;
  vector<int>V(N), P(N);
  REP(i, N) {
    cin >> V.at(i) >> P.at(i);
  }

  X *= 100;
  ll alc = 0;
  REP(i, N) {
    alc += V.at(i) * P.at(i);
    if (alc > X) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}