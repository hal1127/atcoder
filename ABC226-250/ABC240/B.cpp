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
  vector<int> a(N);
  rep (i, 0, N) cin >> a.at(i);
  set<int> s;
  rep (i, 0, N) s.insert(a.at(i));

  cout << s.size() << endl;
}
