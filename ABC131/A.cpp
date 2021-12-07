#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string s;
  cin >> s;
  rep (i, 0, s.length()-1) {
    if (s.at(i) == s.at(i+1)) {
      cout << "Bad" << endl;
      return 0;
    }
  }
  cout << "Good" << endl;
}
