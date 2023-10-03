#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll N, Q;
  cin >> N >> Q;
  vector<ll> A(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }
  vector<ll> L(Q), R(Q), V(Q);
  rep (i, 0, Q) {
    cin >> L.at(i) >> R.at(i) >> V.at(i);
  }

  vector<ll> D(N-1);
  rep (i, 0, N-1) {
    D.at(i) = A.at(i) - A.at(i+1);
  }
  ll ans = 0;
  for (auto d : D) ans += abs(d);

  rep (i, 0, Q) {
    // 地殻変動前, 地殻変動後
    ll mae = 0, ato = 0;
    if (L.at(i)-2 >= 0) {
      mae += abs(D.at(L.at(i)-2));
      D.at(L.at(i)-2) -= V.at(i);
      ato += abs(D.at(L.at(i)-2));
    }
    if (R.at(i)-1 < N-1) {
      mae += abs(D.at(R.at(i)-1));
      D.at(R.at(i)-1) += V.at(i);
      ato += abs(D.at(R.at(i)-1));
    }


    // 地殻変動の前後で差分を取り、ansに代入する
    ans += ato - mae;
    cout << ans << endl;
  }
}
