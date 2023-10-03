#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> A(K), L(Q);
  rep (i, 0, K) cin >> A[i];
  rep (i, 0, Q) cin >> L[i];
  rep (i, 0, Q) L[i]--;

  rep (i, 0, Q) {
    if (A[L[i]] == N) continue;
    bool ok = true;
    rep (j, 0, K) {
      if (A[j] == A[L[i]] + 1) {
        ok = false;
        break;
      }
    }
    if (ok) A[L[i]]++;
  }

  rep (i, 0, K) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl;
}
