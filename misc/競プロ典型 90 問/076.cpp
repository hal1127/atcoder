#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N;
vector<ll> A;
// 累積行列
vector<ll> B;

ll bs(int l)
{
  int left = -1, right = B.size();

  while((right - left) > 1) {
    int mid = left + (right - left) / 2;

    if ((B.at(mid) - B.at(l)) >= (B.at(N) / 10)) right = mid;
    else left = mid;
  }

  return B.at(right) - B.at(l);
}

int main()
{
  cin >> N;
  A.resize(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }

  B.resize(2*N+1);
  B.at(0) = 0;
  rep (i, 0, N) {
    B.at(i+1) = B.at(i) + A.at(i);
  }
  rep (i, 0, N) {
    B.at(i+N+1) = B.at(i+N) + A.at(i);
  }

  if (B.at(N) % 10 != 0) {
    cout << "No" << endl;
    return 0;
  }

  rep (i, 0, N) {
    if (bs(i) == (B.at(N) / 10)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
