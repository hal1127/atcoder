#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y)
{
  if (x == 0) return y;
  if (y == 0) return x;
  if (x >= y) return gcd(y, x % y);
  else return gcd(x, y % x);
}

int main()
{
  ll A, B;
  cin >> A >> B;
  ll r = B / gcd(A, B);

  // r * A > (ll)1e18
  if (r > (ll)1e18 / A) {
    cout << "Large" << endl;
  } else{
    cout << r * A << endl;
  }
}
