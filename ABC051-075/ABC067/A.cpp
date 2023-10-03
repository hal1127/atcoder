#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B;
  cin >> A >> B;

  if (A % 3 == 0) {
    cout << "Possible" << endl;
    return 0;
  }
  if (B % 3 == 0) {
    cout << "Possible" << endl;
    return 0;
  }
  if ((A + B) % 3 == 0) {
    cout << "Possible" << endl;
    return 0;
  }

  cout << "Impossible" << endl;
}
