#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  if (C) {
    if (B > A) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
  } else {
    if (A > B) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
  }
}
