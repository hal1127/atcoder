#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N;
vector<int> A, B, C;
vector<int> a(46), b(46), c(46);

int main()
{
  cin >> N;
  A.resize(N); B.resize(N); C.resize(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }
  rep (i, 0, N) {
    cin >> B.at(i);
  }
  rep (i, 0, N) {
    cin >> C.at(i);
  }

  rep (i, 0, N) {
    a.at(A.at(i) % 46)++;
    b.at(B.at(i) % 46)++;
    c.at(C.at(i) % 46)++;
  }

  ll ans = 0;
  rep (i, 0, 46) {
    rep (j, 0, 46) {
      rep (k, 0, 46) {
        if ((i + j + k) % 46 == 0) {
          ans += 1LL * a.at(i) * b.at(j) * c.at(k);
        }
      }
    }
  }

  cout << ans << endl;
}
