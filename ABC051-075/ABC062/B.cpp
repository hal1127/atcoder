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
  vector<string> a(H);
  rep (i, 0, H) {
    cin >> a.at(i);
  }

  cout << '#';
  rep (i, 0, W) cout << '#';
  cout << '#' << endl;
  for (auto s : a) {
    cout << '#';
    cout << s;
    cout << '#' << endl;
  }
  cout << '#';
  rep (i, 0, W) cout << '#';
  cout << '#' << endl;
}
