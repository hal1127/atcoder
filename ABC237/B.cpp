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
  rep (i, 0, H) {
    rep (j, 0, W) cin >> A.at(i).at(j);
  }

  rep (i, 0, W) {
    rep (j, 0, H) {
      if (j == H-1) {
        cout << A.at(j).at(i);
      } else {
        cout << A.at(j).at(i) << " ";
      }
    }
    cout << endl;
  }
}
