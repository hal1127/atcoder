#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// Input
int H, W;
vector<vector<int>> P;

int max_same(vector<int> R)
{
  map<int, int> M; int ret = 0;
  for (auto r : R) M[r]++;
  for (auto m : M) ret = max(ret, m.second);
  return ret;
}

int main()
{
  cin >> H >> W;
  P.resize(H, vector<int>(W));
  rep (i, 0, H) {
    rep (j, 0, W) {
      cin >> P.at(i).at(j);
    }
  }

  int ans = 0;
  rep (i, 1, (1 << H)) {
    vector<int> R;
    rep (j, 0, W) {
      int el = -1; bool flag = false;
      rep (k, 0, H) {
        if ((i & (1 << k)) == 0) continue;
        if (el == -1) el = P.at(k).at(j);
        else if (P.at(k).at(j) != el) {
          flag = true;
          break;
        }
      }
      if (!flag) R.push_back(el);
    }

    int cntH = 0, cntW = max_same(R);
    rep (j, 0, H) {
      if ((i & (1 << j)) != 0) cntH++;
    }
    ans = max(ans, cntH * cntW);
  }
  cout << ans << endl;
}
