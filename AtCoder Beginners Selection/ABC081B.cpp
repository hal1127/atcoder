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
  vector<int> A(N);
  REP(i, N) {
    cin >> A.at(i);
  }
  vector<int> div(N);
  REP (i, N) {
    while(A.at(i) % 2 == 0) {
      A.at(i) /= 2;
      div.at(i)++;
    }
  }

  cout << *min_element(ALL(div)) << endl;
}