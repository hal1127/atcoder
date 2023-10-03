#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string N;
  cin >> N;
  int M = 0;
  rep (i, 0, N.size()) {
    M += atoi(N.substr(i, 1).c_str());
  }

  cout << (M % 9 == 0 ? "Yes" : "No") << endl;
}
