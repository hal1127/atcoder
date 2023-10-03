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
  vector<string> S(N), T(N);
  rep (i, 0, N) {
    cin >> S.at(i);
  }
  rep (i, 0, N) {
    cin >> T.at(i);
  }

  int xleft, xright;
  int yleft, yright;
  rep (x, 0, N) {
    bool flag = false;
    rep (y, 0, N) {
      if (S.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      xleft = x;
      break;
    }
  }
  for (int x = N-1; x >= 0; x--) {
    bool flag = false;
    rep (y, 0, N) {
      if (S.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      xright = x;
      break;
    }
  }

  rep (y, 0, N) {
    bool flag = false;
    rep (x, 0, N) {
      if (S.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      yleft = y;
      break;
    }
  }
  for (int y = N-1; y >= 0; y--) {
    bool flag = false;
    rep (x, 0, N) {
      if (S.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      yright = y;
      break;
    }
  }

  vector<string> S_trim;
  rep (y, yleft, yright+1) {
    string tmp;
    rep (x, xleft, xright+1) {
      tmp = tmp + S.at(y).at(x);
    }
    S_trim.push_back(tmp);
  }

  rep (x, 0, N) {
    bool flag = false;
    rep (y, 0, N) {
      if (T.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      xleft = x;
      break;
    }
  }
  for (int x = N-1; x >= 0; x--) {
    bool flag = false;
    rep (y, 0, N) {
      if (T.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      xright = x;
      break;
    }
  }

  rep (y, 0, N) {
    bool flag = false;
    rep (x, 0, N) {
      if (T.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      yleft = y;
      break;
    }
  }
  for (int y = N-1; y >= 0; y--) {
    bool flag = false;
    rep (x, 0, N) {
      if (T.at(y).at(x) == '#') {
        flag = true;
        break;
      }
    }
    if (flag) {
      yright = y;
      break;
    }
  }

  vector<string> T_trim;
  rep (y, yleft, yright+1) {
    string tmp;
    rep (x, xleft, xright+1) {
      tmp = tmp + T.at(y).at(x);
    }
    T_trim.push_back(tmp);
  }

  vector<string> T_trim_v;
  rep (x, xleft, xright+1) {
    string tmp = "";
    rep (y, yleft, yright+1) {
      tmp = T.at(y).at(x) + tmp;
    }
    T_trim_v.push_back(tmp);
  }

  if (S_trim.size() == T_trim.size()) {
    // S_trimとT_trimが等しい
    bool flag = true;
    int M = S_trim.size();
    rep (i, 0, M) {
      if ((S_trim.at(i) != T_trim.at(i))) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
    flag = true;
    rep (i, 0, M) {
      string tmp = T_trim.at(M-i-1);
      reverse(all(tmp));
      if ((S_trim.at(i) != tmp)) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if (S_trim.size() == T_trim_v.size()) {
    // S_trimとT_trim_vが等しい
    bool flag = true;
    int M = S_trim.size();
    rep (i, 0, M) {
      if ((S_trim.at(i) != T_trim_v.at(i))) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }

    flag = true;
    rep (i, 0, M) {
      string tmp = T_trim_v.at(M-i-1);
      reverse(all(tmp));
      if ((S_trim.at(i) != tmp)) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
