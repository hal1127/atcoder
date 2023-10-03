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
  vector<ll> A(N), B(N);
  rep(i, 0, N) {
    cin >> A.at(i);
  }
  rep(i, 0, N) {
    cin >> B.at(i);
  }

  sort(all(A)); sort(all(B));

  ll ans = 0;
  rep(i, 0, N) {
    ans += abs(A.at(i) - B.at(i));
  }
  cout << ans << endl;
}