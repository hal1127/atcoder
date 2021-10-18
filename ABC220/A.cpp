#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  rep (i, A, B+1) {
    if (i % C == 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
