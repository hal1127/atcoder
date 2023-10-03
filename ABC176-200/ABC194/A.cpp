#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B;
  cin >> A >> B;
  int C = A + B;
  if (C >= 15 && B >= 8) {
    cout << 1 << endl;
  } else if (C >= 10 && B >= 3) {
    cout << 2 << endl;
  } else if (C >= 3) {
    cout << 3 << endl;
  } else {
    cout << 4 << endl;
  }
}
