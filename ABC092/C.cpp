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
  vector<int> A(N);
  rep (i, 0, N) cin >> A.at(i);

  ll sum = 0;
  int a = 0;
  for (int b : A) {
    sum += abs(b-a);
    a = b;
  }
  sum += abs(a);

  rep (i, 0, N) {
    int a = 0, b = A.at(i), c = 0;
    if (i > 0) a = A.at(i-1);
    if (i < N-1) c = A.at(i+1);

    ll ans = sum;
    ans -= abs(b-a);
    ans -= abs(c-b);
    ans += abs(c-a);

    cout << ans << endl;
  }
}
