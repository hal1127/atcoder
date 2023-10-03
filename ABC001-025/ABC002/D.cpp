#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int permutation (int n, int r)
{
  int p = 1;
  FOR(i, n-r+1, n+1) {
    p *= i;
  }
  return p;
}

int combination (int n, int r)
{
  return permutation(n, r) / permutation(r, r);
}

int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> frnd(M);
  REP(i, M) {
    int x, y;
    cin >> x >> y;
    frnd.at(i) = make_pair(x, y);
  }

  int max_mem = 0;
  REP(i, pow(2, N)) {
    bool f = true;
    // REPR(j, N-1) {
    //   cout << (i >> j & 1);
    // }
    // cout << endl;

    vector<int> mem;
    REP(j, N) {
      if (i >> j & 1) {
        mem.push_back(j+1);
      }
    }
    REP(i, mem.size()) {
      FOR(j, i+1, mem.size()) {
        if (find(ALL(frnd), make_pair(mem.at(i), mem.at(j))) == frnd.end()) {
          f = false;
        }
      }
    }
    if (f) max_mem = max(max_mem, (int)mem.size());
  }
  cout << max_mem << endl;
}
