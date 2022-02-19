#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string S;
  cin >> S;

  int N = S.size();
  int ans = 0;
  rep (i, 0, N/2) {
    if (S.at(i) != S.at(N-1-i)) ans++;
  }

  cout << ans << endl;
}
