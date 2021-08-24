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
  cin >> N;
  vector<int> a(N);
  REP(i, N) {
    cin >> a.at(i);
  }

  sort(ALL(a));
  reverse(ALL(a));

  int sumA = 0, sumB = 0;
  REP(i, N) {
    if (i % 2 == 0) sumA += a.at(i);
    else sumB += a.at(i);
  }

  cout << sumA - sumB << endl;
}