#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N);
  rep(i, 0, N) {
    cin >> A.at(i);
  }
  rep(i, 0, N) {
    cin >> B.at(i);
  }

  // AとBの差分
  int diff = 0;
  rep(i, 0, N) {
    diff += abs(B.at(i) - A.at(i));
  }

  if (K < diff) {
    cout << "No" << endl;
  // Kよりdiffのほうが大きいとき、Kとdiffの差が2の倍数なら、+1と-1を繰り返すことで同じ値にすることができるため、Yes
  } else {
    cout << ((K - diff) % 2 == 0 ? "Yes" : "No") << endl;
  }
}
