#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, X, T;
  cin >> N >> X >> T;

  cout << (int)ceil(1.0 * N / X) * T << endl;
}
