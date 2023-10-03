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
  vector<int> X(N), Y(N);
  rep (i, 0, N) {
    cin >> X.at(i) >> Y.at(i);
  }

  sort(all(X)); sort(all(Y));

  ll ans = 0;
  int xmod = X.at((X.size()-1) / 2);
  int ymod = Y.at((Y.size()-1) / 2);
  rep (i, 0, (int)X.size()) {
    ans += abs(X.at(i) - xmod);
    ans += abs(Y.at(i) - ymod);
  }

  cout << ans << endl;
}
