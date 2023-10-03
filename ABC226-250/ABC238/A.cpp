#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;

  if (n < 5) {
    cout << (pow(2, n) > n*n ? "Yes" : "No") << endl;
  } else {
    cout << "Yes" << endl;
  }
}
