#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B;
  int W;
  cin >> A >> B >> W;

  int mi = INF, ma = 0;
  for (int n=1; n <= 1000*W; n++) {
    if (A*n <= 1000*W && 1000*W <= B*n) {
      mi = min(mi, n);
      ma = max(ma, n);
    }
  }
  if (ma == 0) cout << "UNSATISFIABLE" << endl;
  else printf("%d %d\n", mi, ma);
}
