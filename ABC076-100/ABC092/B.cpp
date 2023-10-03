#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, D, X;
  vector<int> A(N);
  cin >> N >> D >> X;
  rep(i, 0, N) cin >> A.at(i);

  // cout << "==============" << endl;
  int eated = 0;
  rep(i, 0, N) {
    int d = (D - 1) / A.at(i) + 1;
    eated += d;
  }

  cout << eated + X << endl;
}
