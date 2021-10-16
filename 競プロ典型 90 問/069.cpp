#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll factorial(int n)
{
  ll ret = 1;
  rep (i, 2, n+1) {
    ret *= i;
  }
  return ret;
}

ll permutation(int n, int r)
{
  return factorial(n) / factorial(n-r);
}

int main()
{
  int N, K;
  cin >> N >> K;

  int MOD = 1e9+7;

  
}
