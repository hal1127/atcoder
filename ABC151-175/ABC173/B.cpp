#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep (i, 0, N) {
    cin >> S.at(i);
  }

  vector<string> O = {"AC", "WA", "TLE", "RE"};
  map<string, int> C;
  rep (i, 0, N) {
    C[S.at(i)]++;
  }

  for (auto x : O) {
    printf("%s x %d\n", x.c_str(), C[x]);
  }
}
