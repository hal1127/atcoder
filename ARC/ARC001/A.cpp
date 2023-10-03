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
  string c;
  cin >> c;
  vector<int> corr;
  FOR(i, 1, 5) {
    int cnt = 0;
    for (auto x : c) {
      if (x == '0'+i) cnt++;
    }
    corr.push_back(cnt);
  }

  printf("%d %d\n", *max_element(ALL(corr)), *min_element(ALL(corr)));
}