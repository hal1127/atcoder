#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<int> b(10);

bool atc_comp(int x, int y)
{
  for(int i = 8; i >= 0; i--) {
    int tmp1, tmp2;
    int p = pow(10, i);
    tmp1 = (x / p) % 10;
    tmp2 = (y / p) % 10;
    // printf("%d, %d\n", tmp1, tmp2);
    if (tmp1 != tmp2 && (tmp1 != 0 || tmp2 != 0)) {
      return find(ALL(b), tmp1) < find(ALL(b), tmp2);
    }
  }
  return false;
}

int main()
{
  REP(i, 10) {
    cin >> b.at(i);
  }
  int N;
  cin >> N;
  vector<int> a(N);
  REP(i, N) {
    cin >> a.at(i);
  }

  sort(ALL(a), atc_comp);

  for (auto x : a) {
    cout << x << endl;
  }
}