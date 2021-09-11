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
  int a, b;
  cin >> a >> b;

  int diff = b - a;
  int sum = 0;
  for (int i = diff-1; i > 0; i--) {
    sum += i;
  }
  cout << sum - a << endl;
}