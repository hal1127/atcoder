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
  int A, B, K;
  cin >> A >> B >> K;

  int cnt = 0;
  for (int i = max(A, B); i >= 1; i--) {
    if (A % i == 0 && B % i == 0) {
      if (++cnt == K) {
        cout << i << endl;
        return 0;
      }
    }
  }
}
