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
  set<string> S;
  REP(i, 3) {
    string tmp;
    cin >> tmp;
    S.insert(tmp);
  }
  set<string> c = {"ABC" , "ARC" , "AGC" , "AHC"};

  vector<string> res;

  set_difference(ALL(c), ALL(S), back_inserter(res));

  cout << res[0] << endl;
}