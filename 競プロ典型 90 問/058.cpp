#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int digit_calc(int n)
{
  int res = n;
  while (n) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

int main()
{
  int N; ll K;
  cin >> N >> K;

  int MOD = 1e5;

  vector<int> nxt(MOD, -1);
  int n = N;
  while (nxt.at(n) == -1) {
    nxt.at(n) = digit_calc(n) % MOD;
    n = nxt.at(n);
  }
  vector<int> time_stamp(MOD, -1);
  int pos = N, cnt = 0;
  while (time_stamp.at(pos) == -1) {
    time_stamp.at(pos) = cnt;
    pos = nxt.at(pos);
    cnt++;
  }
  cnt--;
  int start_cycle = time_stamp.at(pos);
  int end_cycle = cnt;
  int cycle = end_cycle - start_cycle + 1;
  if (K >= time_stamp.at(pos)) {
    // 答えの回数はサイクルの何回目にあたるか
    K = (K - time_stamp.at(pos)) % cycle + time_stamp.at(pos);
  }
  int ans = -1;
  rep (i, 0, MOD) {
    if (time_stamp.at(i) == K) ans = i;
  }
  cout << ans << endl;
}
