#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;

  int X1 = N / 1.08;
  int X2 = X1 + 1;
  int N1 = X1 *  1.08;
  int N2 = X2 * 1.08;
  if (N1 == N) {
    cout << X1 << endl;
  } else if (N2 == N) {
    cout << X2 << endl;
  } else {
    cout << ":(" << endl;
  }
}
