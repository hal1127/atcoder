#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll N;
  cin >> N;
  vector<int> A(N), B(N);
  rep (i, 0, N) {
    cin >> A.at(i) >> B.at(i);
  }

  vector<int> D(1e3+1, 0);
  rep(i, 0, N) {
    D.at(A.at(i)) += 1;
    D.at(A.at(i)+B.at(i)) -= 1;
  }
  rep (i, 1, D.size()) {
    D.at(i) += D.at(i-1);
  }

  map<int, int> cnt;
  rep (i, 1, N+1) {
    cnt[i];
  }
  rep (i, 0, D.size()) {
    cnt[D.at(i)] += 1;

  }

  rep (i, 1, N+1) {
    cout << cnt.at(i) << endl;
  }
}
