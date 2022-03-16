#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N;
vector<int> a(100);

int main()
{
  cin >> N;
  rep (i, 0, N) cin >> a[i];

  int mi = INF;
  rep (i, -100, 101) {
    int su = 0;
    rep (j, 0, N) {
      su += (a[j] - i) * (a[j] - i);
    }
    mi = min(mi, su);
  }

  cout << mi << endl;
}
