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
  vector<vector<int>> a(N);
  vector<vector<int>> dp(N);
  REP(i, N) {
    REP(j, i+1) {
      int tmp;
      cin >> tmp;
      a.at(i).push_back(tmp);
      dp.at(i).push_back(0);
    }
  }

  dp.at(0).at(0) = a.at(0).at(0);
  FOR(i, 1, dp.size()) {
    FOR(j, 0, dp.at(i).size()) {
      int sum = 0;
      if (j == 0) {
        sum = max(sum, dp.at(i-1).at(j));
      } else if (j == dp.at(i).size()-1) {
        sum = max(sum, dp.at(i-1).at(j-1));
      } else {
        sum = max(sum, dp.at(i-1).at(j));
        sum = max(sum, dp.at(i-1).at(j-1));
      }
      dp.at(i).at(j) = sum + a.at(i).at(j);
    }
  }
  // REP(i, N) {
  //   REP(j, i+1) {
  //     cout << dp.at(i).at(j) << " ";
  //   }
  //   cout << endl;
  // }

  cout << *max_element(ALL(dp.at(dp.size()-1))) << endl;
}
