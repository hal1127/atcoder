#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;

  // iになるまでの最小回数
  vector<int> dp(N+1, -1);
  dp.at(0) = 0;

  rep (i, 1, N+1) {
    int remain = i;
    int cnt = INF;

    int m = 1;
    cnt = min(cnt, dp.at(remain - m)+1);

    m = 6;
    while (remain >= m) {
      cnt = min(cnt, dp.at(remain - m)+1);
      m *= 6;
    }

    m = 9;
    while (remain >= m) {
      cnt = min(cnt, dp.at(remain - m)+1);
      m *= 9;
    }

    dp.at(i) = cnt;
  }

  cout << dp.at(N) << endl;
}