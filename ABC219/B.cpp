#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  vector<string> S(3);
  string T;
  rep (i, 0, 3) {
    cin >> S.at(i);
  }
  cin >> T;
  for (auto t : T) {
    cout << S.at(t-'1');
  }
  cout << endl;
}
