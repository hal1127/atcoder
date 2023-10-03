#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

string X;

bool mycomp(string l, string r)
{
  rep (i, 0, min(l.size(), r.size())){
    int l_at = find(all(X), l.at(i)) - X.begin();
    int r_at = find(all(X), r.at(i)) - X.begin();

    if (l_at != r_at) {
      return l_at < r_at;
    }
  }
  if (l.size() != r.size()) return l.size() < r.size();
  else return true;
}

int main()
{
  int N;
  cin >> X;
  cin >> N;
  vector<string> S(N);
  rep (i, 0, N) {
    cin >> S.at(i);
  }


  sort(all(S), mycomp);

  rep (i, 0, N) {
    cout << S.at(i) << endl;
  }
}
