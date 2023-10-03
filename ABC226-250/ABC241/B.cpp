#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep (i, 0, N) cin >> A[i];
  rep (i, 0, M) cin >> B[i];

  vector<bool> eated(N);
  for (auto b : B) {
    bool is_eat = false;
    rep (i, 0, N) {
      if (b == A[i] && !eated[i]) {
        eated[i] = true;
        is_eat = true;
        break;
      }
    }
    if (!is_eat) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
