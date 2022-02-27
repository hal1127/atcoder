#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;

  int ans = 1, cnt = 0;
  rep (i, 1, N+1) {
    int ncnt = 0;
    int n = i;
    while (n % 2 == 0) {
      ncnt++;
      n /= 2;
    }
    if (cnt < ncnt) {
      ans = i;
      cnt = ncnt;
    }
  }

  cout << ans << endl;
}
