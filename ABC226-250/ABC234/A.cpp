#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll f(ll x) {
  return x*x+2*x+3;
}

int main()
{
  ll t;
  cin >> t;

  cout << f(f(f(t) + t) + f(f(t))) << endl;
}
