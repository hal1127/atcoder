#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int mod = 1e9 + 7;

ll kaijo(int n)
{
  ll k = 1;
  FOR(i, 2, n+1) {
    k *= i;
    k %= mod;
  }
  return k;
}

int main()
{
  int N, M;
  cin >> N >> M;
  ll kenen;
  if (N == M) {
    kenen = 2;
  } else if (abs(N-M) == 1) {
    kenen = 1;
  } else {
    cout << 0 << endl;
    return 0;
  }
    kenen *= kaijo(N);
    kenen %= mod;
    kenen *= kaijo(M);
    kenen %= mod;
    cout << kenen << endl;
}
