#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int L;

ll comb(ll n, ll m)
{
  ll res = 1;
  rep (i, 1, m+1) {
    res *= (n-(i-1));
    res /= i;
  }

  return res;
}

int main()
{
  cin >> L;

  cout << comb(L-1, 11) << endl;
}
