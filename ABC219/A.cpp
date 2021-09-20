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
  if (X < 40) {
    cout << 40 - X;
  } else if (X < 70) {
    cout << 70 - X;
  } else if (X < 90) {
    cout << 90 - X;
  } else {
    cout << "expert";
  }
  cout << endl;
}
