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
  int len = log(N)/log(10)+1;
  ll ans = -1;
  rep(i, 1, (1 << len)/2) {
    vector<int> anum, bnum;
    rep(j, 0, len) {
      if ((i >> j) & 1) {
        int tmp = N / (int)pow(10, j) % 10;
        anum.push_back(tmp);
      } else {
        int tmp = N / (int)pow(10, j) % 10;
        bnum.push_back(tmp);
      }
    }
    sort(all(anum));
    sort(all(bnum));
    int a = 0, b = 0;
    int apos = 0, bpos = 0;
    rep (j, 0, anum.size()) {
      a += anum.at(j) * pow(10, j);
    }
    rep (j, 0, bnum.size()) {
      b += bnum.at(j) * pow(10, j);
    }
    ans = max(ans, 1LL*a*b);
  }
  cout << ans << endl;
}
