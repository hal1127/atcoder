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
  const vector<string> V = {"dream", "dreamer", "erase", "eraser"};
  string S;
  cin >> S;

  while (S != "") {
    bool changed = false;
    for (auto v : V) {
      if(S.size() >= v.size() && S.substr(S.size()-v.size()) == v) {
        S = S.substr(0, S.size()-v.size());
        changed = true;
      }
    }
    if (!changed){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
