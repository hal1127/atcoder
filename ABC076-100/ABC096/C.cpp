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
  vector<string> s(H);
  rep (i, 0, H) {
    cin >> s.at(i);
  }
  string tmp = "";
  rep (i, 0, W) {
    tmp += '.';
  }
  vector<string> board(H, tmp);
  rep (i, 0, H-1) {
    rep (j, 0, W) {
      if (s.at(i).at(j) == '#' &&
          s.at(i).at(j) == s.at(i+1).at(j)) {
        board.at(i).at(j) = '#';
        board.at(i+1).at(j) = '#';
      }
    }
  }
  rep (i, 0, H) {
    rep (j, 0, W-1) {
      if (s.at(i).at(j) == '#' &&
          s.at(i).at(j) == s.at(i).at(j+1)) {
        board.at(i).at(j) = '#';
        board.at(i).at(j+1) = '#';
      }
    }
  }

  bool flag = true;
  rep (i, 0, H) {
    if (s.at(i) != board.at(i)) {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
