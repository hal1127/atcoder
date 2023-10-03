#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int a, b;
  cin >> a >> b;

  if (b-a == 1 || b-a == 9) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
