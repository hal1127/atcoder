#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll N, K, L;
vector<ll> A;

// 貪欲法でようかんがMcm以上にK個以上きれるかを確認する
bool solve(ll M)
{
  ll cnt = 0, pre = 0;
  rep(i, 0, N) {
    // 切った左側と右側がMcmになっているか
    if (A.at(i) - pre >= M && L -A.at(i) >= M) {
      cnt++;
      pre = A.at(i);
    }
  }
  // 切った回数がK以上ならtrue
  if (cnt >= K) return true;
  return false;
}

int main()
{
  cin >> N >> L >> K;
  A = vector<ll>(N);
  rep(i, 0, N) {
    cin >> A.at(i);
  }

  ll left = -1; // ok
  ll right = L + 1; // ng
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (solve(mid)) left = mid;
    else right = mid;
  }
  cout << left << endl;
}
