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
  int N, M;
  cin >> N >> M;
  vector<int> disk(M);
  REP(i, M) {
    cin >> disk.at(i);
  }

  // 0はプレイヤー内
  vector<int> cd_case(N+1);
  REP(i, N+1) {
    cd_case.at(i) = i;
  }
  for (int d : disk) {
    if (cd_case.at(0) == d) {
      continue;
    } else {
      for (auto& c : cd_case) {
        if (c == d) {
          int tmp = cd_case.at(0);
          cd_case.at(0) = c;
          c = tmp;
        }
      }
    }
  }

  REP(i, N) {
    cout << cd_case.at(i+1) << endl;
  }
}