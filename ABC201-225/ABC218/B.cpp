#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  vector<int> P(26);
  rep (i, 0, 26) {
    cin >> P.at(i);
  }

  for (auto p : P) {
    cout << char('a' + (p-1));
  }
  cout << endl;
}
