#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int M1, D1, M2, D2;
  cin >> M1 >> D1;
  cin >> M2 >> D2;

  if (M1 == 12) {
    if (M2 == 1) {
      cout << 1;
    } else {
      cout << 0;
    }
  } else {
    if (M1 == M2) {
      cout << 0;
    } else {
      cout << 1;
    }
  }
  cout << endl;
}
