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
  vector<int> t(N);
  vector<int> x(N);
  vector<int> y(N);

  REP(i, N) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }

  REP(i, t.size()) {
    int mdis_diff = abs(x.at(i) + y.at(i)
                    - (i == 0 ? 0 : x.at(i-1) + y.at(i-1)));
    int time_diff = abs(t.at(i)
                    - (i == 0 ? 0 : t.at(i-1)));

    if (time_diff < mdis_diff
        || (time_diff - mdis_diff) % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}