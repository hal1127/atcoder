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
  vector<int> A(N);
  REP(i, N) {
    cin >> A.at(i);
  }
  map<int, int> cnt;
  REP(i, N) {
    cnt[A.at(i)]++;
  }

  ll ans = 0;
  // O(400*400)
  for (auto p1 : cnt) {
    for (auto p2 : cnt) {
      if (p1.first == p2.first) continue;
      // 1LLはキャストのため
      ans += 1LL * (p1.first-p2.first) * (p1.first-p2.first) * p1.second * p2.second;
    }
  }
  // 組み合わせなので
  cout << ans/2 << endl;
}
