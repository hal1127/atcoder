#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int X;
  cin >> X;

  int ans = 0;
  int cnt;
  ans += (X / 500) * 1000;
  X %= 500;
  ans += (X / 5) * 5;
  
  cout << ans << endl;
}
