#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  vector<int> A(4);
  rep (i, 0, 4) cin >> A[i];

  int ans = accumulate(all(A), INF, [](int a, int b){return min(a, b);});

  cout << ans << endl;
}
