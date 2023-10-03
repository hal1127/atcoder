#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// Input
int H, W;

int main()
{
  cin >> H >> W;

  if (H == 1 || W == 1) cout << H * W << endl;
  // これと同じ => (H+1) / 2 * (W+1) / 2
  else cout << ceil(1.0 * H / 2) * ceil(1.0 * W / 2) << endl;
}
