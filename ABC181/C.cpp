#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

bool is_same_slope (int a[], int b[], int c[])
{
  int x1 = b[0] - a[0];
  int y1 = b[1] - a[1];
  int x2 = c[0] - b[0];
  int y2 = c[1] - b[1];

  // y1 / x1 = y2 / x2 だと0除算が発生するため
  return x2 * y1 == x1 * y2;
}

int main ()
{
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  rep (i, 0, N) cin >> x[i] >> y[i];

  // 100C3 = 161,700 で余裕で間に合う
  rep (i, 0, N) {
    rep (j, 0, i) {
      rep (k, 0, j) {
        int a[] = { x[i], y[i] };
        int b[] = { x[j], y[j] };
        int c[] = { x[k], y[k] };
        if (is_same_slope(a, b, c)) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
}
