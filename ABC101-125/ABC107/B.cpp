// 繰り返し処理, 配列操作
#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int H, W;
vector<string> A;

bool solve()
{
  rep (r, 0, H) {
    // 除去していいか
    bool ok = true;
    rep (c, 0, W) if (A.at(r).at(c) == '#') ok = false;
    if (ok) {
      // A.erase(A.begin()+r);
      rep (rr, r+1, H) swap(A.at(rr - 1), A.at(rr));
      H--;
      return true;
    }
  }

  rep (c, 0, W) {
    bool ok = true;
    rep (r, 0, H) if (A.at(r).at(c) == '#') ok = false;
    if (ok) {
      rep (r, 0, H) {
        A.at(r) = A.at(r).substr(0, c) + A.at(r).substr(c+1);
      }
      W--;
      return true;
    }
  }
  return false;
}

int main()
{
  cin >> H >> W;
  A.resize(H);
  rep (i, 0, H) cin >> A.at(i);

  while(solve());

  rep (i, 0, H) cout << A.at(i) << endl;
}
