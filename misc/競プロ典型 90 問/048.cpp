#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// 上界を見積もる
// ルールガン無視で点数が一番大きくなる方法を考えてみる

// Input
int N, K;
vector<int> A, B;

vector<int> P;

int main()
{
  cin >> N >> K;
  A.resize(N); B.resize(N);
  rep (i, 0, N) {
    cin >> A.at(i) >> B.at(i);
  }

  rep (i, 0, N) {
    P.push_back(B.at(i));
    P.push_back(A.at(i) - B.at(i));
  }
  sort(all(P));
  reverse(all(P));

  ll ans = 0;
  rep (i, 0, K) {
    ans += P.at(i);
  }

  cout << ans << endl;
}
