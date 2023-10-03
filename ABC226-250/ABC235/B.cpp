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
  vector<int> H(N);
  rep (i, 0, N) {
    cin >> H.at(i);
  }

  int ans = -1;
  rep (i, 0, N) {
    if (ans < H.at(i)) ans = H.at(i);
    else break;
  }

  cout << ans << endl;
}
