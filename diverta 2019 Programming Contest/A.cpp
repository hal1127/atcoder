#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N, K;

int comb(int n, int r)
{
  if (r == 1) return n;
  else return (comb(n, r-1) * (n-r+1)) / r;
}

int main()
{
  cin >> N >> K;

  cout << N-K+1 << endl;
}
