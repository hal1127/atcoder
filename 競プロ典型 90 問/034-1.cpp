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
  int a[N];
  rep (i, 0, N) cin >> a[i];

  int c[N];
  map<int, int> m;
  m[a[0]]++;

  // [l, r]の閉区間を考える
  int r = 0;
  rep (l, 0, N) {
    while (r < N-1 && m.size() < K) {
      r++;
      m[a[r]]++;
    }
    // 次の数字がすでに含まれている数字であればrを進める
    while (r < N-1 && m.count(a[r+1])) {
      r++;
      m[a[r]]++;
    }

    c[l] = r;
    m[a[l]]--;
    if (m[a[l]] == 0) m.erase(a[l]);
  }

  int ans = 0;
  rep (i, 0, N) ans = max(ans, c[i]-i+1);

  cout << ans << endl;
}
