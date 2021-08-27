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
  int N;
  ll Y;
  // N = 2000; Y = 20000000;
  cin >> N >> Y;
  int x = -1, y = -1, z = -1;

  REPR(i, N) {
    REPR(j, N-i) {
      int k = N-i-j;
      int sum = 10000*i+5000*j+1000*k;
      if (Y == sum) {
        x = i;
        y = j;
        z = k;
        goto EXIT;
      }
    }
  }
  EXIT:

  printf("%d %d %d\n", x, y, z);
}