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
  vector<ll> x(N), y(N);
  REP(i, N) {
    cin >> x.at(i) >> y.at(i);
  }

  int cnt = 0;
  FOR(i, 0, N) {
    FOR(j, i+1, N) {
      FOR(k, j+1, N) {
        // printf("%d %d %d\n", i, j, k);
        ll s = abs((x.at(i) - x.at(k))*(y.at(j) - y.at(k)) -
                    (x.at(j) - x.at(k))*(y.at(i) - y.at(k)));
        if (s % 2 == 0 && s != 0) {
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;
}