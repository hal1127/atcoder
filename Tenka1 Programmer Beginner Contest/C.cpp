#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
  ll N;
  int h, n, w;
  cin >> N;

  for (h = 1; h < 3501; h++) {
    for (n = 1; n < 3501; n++) {
      if ((4*h*n-N*n-N*h) > 0 && (N*h*n)%(4*h*n-N*n-N*h) == 0) {
        w = int((N * h * n) / (4 * h * n - N * n - N * h));
        printf("%d %d %d\n", h, n, w);
        return 0;
      }
    }
  }
}