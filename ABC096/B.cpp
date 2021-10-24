#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  vector<int> V = {A, B, C};
  auto M = max_element(all(V));
  rep (i, 0, K) {
    *M *= 2;
  }

  int ans = 0;
  rep (i, 0, 3) {
    ans += V.at(i);
  }

  cout << ans << endl;
}
