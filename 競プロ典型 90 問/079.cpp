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
  vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
  rep (i, 0, H) {
    rep (j, 0, W) {
      cin >> A.at(i).at(j);
    }
  }
  rep (i, 0, H) {
    rep (j, 0, W) {
      cin >> B.at(i).at(j);
    }
  }

  ll cnt = 0;
  rep (i, 0, H-1) {
    rep (j, 0, W-1) {
      int diff = B.at(i).at(j) - A.at(i).at(j);
      A.at(i).at(j) += diff;
      A.at(i+1).at(j) += diff;
      A.at(i).at(j+1) += diff;
      A.at(i+1).at(j+1) += diff;
      cnt += abs(diff);
    }
  }
  rep (i, 0, H) {
    if (A.at(i).at(W-1) != B.at(i).at(W-1)) {
      cout << "No" << endl;
      return 0;
    }
  }
  rep (i, 0, W) {
    if (A.at(H-1).at(i) != B.at(H-1).at(i)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  cout << cnt << endl;
}