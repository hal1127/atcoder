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

  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));

  // この金額に到達したか
  vector<bool> money(N+1, false);
  money.at(0) = true;
  while(!q.empty()) {
    auto nowq = q.front();
    q.pop();
    if (nowq.first == N) {
      cout << nowq.second << endl;
      return 0;
    }

    // まだ到達していないなら
    if (!money.at(nowq.first+1)) {
      q.push(make_pair(nowq.first+1, nowq.second+1));
      money.at(nowq.first+1) = true;
    }
    for (int i = 1; nowq.first+pow(6, i) <= N; i++) {
      if (!money.at(nowq.first+pow(6, i))) {
        q.push(make_pair(nowq.first+pow(6, i), nowq.second+1));
        money.at(nowq.first+pow(6, i)) = true;
      }
    }
    for (int i = 1; nowq.first+pow(9, i) <= N; i++) {
      if (!money.at(nowq.first+pow(9, i))) {
        q.push(make_pair(nowq.first+pow(9, i), nowq.second+1));
        money.at(nowq.first+pow(9, i)) = true;
      }
    }
  }
}