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
  vector<int> V(N), C(N);
  rep (i, 0, N) {
    cin >> V.at(i);
  }
  rep (i, 0, N) {
    cin >> C.at(i);
  }

  vector<int> diff(N);
  rep (i, 0, N) {
    diff.at(i) = V.at(i) - C.at(i);
  }

  int ans = accumulate(all(diff), 0, [](int a, int b){ return b > 0 ? a+b : a;});

  cout << ans << endl;
}
