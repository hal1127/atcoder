#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, S, D;
  cin >> N >> S >> D;
  vector<int> X(N), Y(N);
  rep (i, 0, N) cin >> X[i] >> Y[i];

  rep (i, 0, N) {
    if (X[i] < S && Y[i] > D) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
