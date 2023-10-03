#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;


int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  rep(i, 0, H) {
    rep(j, 0, W) {
      cin >> A.at(i).at(j);
    }
  }
  vector<int> sum_x(H), sum_y(W);
  rep(i, 0, H) {
    rep(j, 0, W) {
      sum_x.at(i) += A.at(i).at(j);
    }
  }
  rep(i, 0, W) {
    rep(j, 0, H) {
      sum_y.at(i) += A.at(j).at(i);
    }
  }
  rep(i, 0, H) {
    rep(j, 0, W) {
      cout << sum_y.at(j) + sum_x.at(i) - A.at(i).at(j) << " ";
    }
    cout << endl;
  }
}
