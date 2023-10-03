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
  vector<int> C(N), P(N);
  rep(i, 0, N) {
    cin >> C.at(i) >> P.at(i);
  }
  int Q;
  cin >> Q;
  vector<int> L(Q), R(Q);
  rep(i, 0, Q) {
    cin >> L.at(i) >> R.at(i);
  }

  // CとPの累積和
  vector<int> S(N+1, 0), T(N+1, 0);
  for(int i = 1; i <= N; i++) {
    if (C.at(i-1) == 1) {
      S.at(i) = S.at(i-1) + P.at(i-1);
      T.at(i) = T.at(i-1);
    } else {
      S.at(i) = S.at(i-1);
      T.at(i) = T.at(i-1) + P.at(i-1);
    }
  }

  rep(i, 0, Q) {
    printf("%d %d\n", S.at(R.at(i)) - S.at(L.at(i)-1), T.at(R.at(i)) - T.at(L.at(i)-1));
  }
}
