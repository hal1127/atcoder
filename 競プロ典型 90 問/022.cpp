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
  if (x >= y) return gcd(x % y, y);
  else return gcd(x, y % x);
}

int main()
{
  ll A, B, C;
  cin >> A >> B >> C;
  ll g = gcd(A, gcd(B, C));
  cout << (A / g - 1) + (B / g - 1) + (C / g - 1) << endl;
}
