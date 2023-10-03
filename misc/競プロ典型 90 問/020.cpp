#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll powll(ll x, ll y)
{
  if (y == 0) return 1;
  return powll(x, y-1) * x;
}

int main()
{
  ll a, b, c;
  cin >> a >> b >> c;
  cout << (a < powll(c, b) ? "Yes" : "No") << endl;
}
