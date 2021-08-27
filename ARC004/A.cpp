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
  vector<int> x(N);
  vector<int> y(N);
  REP(i, N) {
    cin >> x.at(i) >> y.at(i);
  }
  double l = 0;
  FOR(i, 0, N) {
    FOR(j, i, N) {
      l = max((double)l, sqrt(pow(x.at(i)-x.at(j), 2)+pow(y.at(i)-y.at(j), 2)));
    }
  }

  cout << l << endl;
}