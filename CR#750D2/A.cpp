#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  int a, b, c;
  rep (i, 0, t) {
    cin >> a >> b >> c;
    cout << (a + c) % 2 << '\n';
  }
}
