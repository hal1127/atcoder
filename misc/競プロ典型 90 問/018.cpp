#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  double T, L, X, Y, Q;
  cin >> T >> L >> X >> Y >> Q;
  vector<double> E(Q);
  rep(i, 0, Q) {
    cin >> E.at(i);
  }

  for (auto e : E) {
    double x, y, z;
    double theta = e / T * 2 * M_PI;
    x = 0;
    y = L / 2 * sin(M_PI+theta);
    z = L / 2 + L / 2 * cos(M_PI+theta);
    // 観覧車の籠と像の水平距離
    double A = sqrt(X*X + (y - Y)*(y - Y));
    // 観覧車の籠と像の垂直距離
    double B = z;
    printf("%.10f\n", atan2(B, A) * 180 / M_PI);
  }
}
