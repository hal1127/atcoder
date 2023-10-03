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
  vector<int> a(N);
  rep (i, 0, N) cin >> a.at(i);

  // 累積和
  vector<ll> b(N+1, 0);
  rep (i, 0, N) b.at(i+1) = b.at(i) + a.at(i);

  // [l, r)の半開区間で考える。
  // すぬけくんは[0, r)のカードを取る。
  // アライグマは[r, N)のカードを取る。
  // これをrが1～Nまで繰り返せば答えが求まる。
  ll mi = INT64_MAX;
  rep (r, 1, N) {
    ll sunuke = b.at(r) - b.at(0);
    ll arai = b.at(N) - b.at(r);
    // printf("%lld, %lld\n", sunuke, arai);
    mi = min(mi, abs(sunuke-arai));
  }
  cout << mi << endl;

  // rep (i, 0, N+1) printf("%2d | ", i);
  // puts("");
  // puts("-----------------------------------");
  // rep (i, 0, N) printf("%2d | ", a.at(i));
  // puts("   |");
  // rep (i, 0, N+1) printf("%2d | ", b.at(i));
  // puts("");
}
