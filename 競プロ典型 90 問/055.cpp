#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;


int main()
{
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> A(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }

  int ans = 0;
  // _100 C _5 = 75,287,520
  rep (i, 0, N) {
    rep (j, i+1, N) {
      rep (k, j+1, N) {
        rep (l, k+1, N) {
          rep (m, l+1, N) {
            int p = 1LL*A.at(i)*A.at(j)%P*A.at(k)%P*A.at(l)%P*A.at(m)%P;
            if (p == Q) ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
}