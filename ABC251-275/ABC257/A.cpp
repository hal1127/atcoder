#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, X;
  cin >> N >> X;
  string S;
  rep (i, 0, 26) {
    string s = "";
    rep (j, 0, N) {
      s += (char)('A' + i);
    }
    S += s;
  }
  cout << S[X-1] << endl;
}
