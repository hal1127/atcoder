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
  int m, n, N;
  cin >> m >> n >> N;

  vector<int> pens = {N};

  int used_N = N;
  while (used_N >= m) {
    N = used_N / m * n;
    used_N = used_N % m;
    pens.push_back(N);
    used_N += N;
  }

  cout << accumulate(ALL(pens), 0) << endl;
}