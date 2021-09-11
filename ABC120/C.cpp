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
  string S;
  cin >> S;
  map<char, int> cnt;
  cnt['0'] = 0;
  cnt['1'] = 0;

  for(auto x : S) {
    cnt[x]++;
  }

  cout << min(cnt['0'], cnt['1'])*2 << endl;
}
