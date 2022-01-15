#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> a(N);
  rep (i, 0, N) cin >> a.at(i);
  vector<int> x(Q), k(Q);
  rep (i, 0, Q) cin >> x.at(i) >> k.at(i);

  map<int, vector<int>> num_pos;
  map<int, int> num_cnts;

  rep (i, 0, N) {
    int num = a.at(i);
    num_cnts[num]++;
    num_pos[num].push_back(i+1);
  }

  rep (i, 0, Q) {
    if (num_pos.count(x.at(i)) && num_cnts.at(x.at(i)) >= k.at(i)) {
      cout << num_pos.at(x.at(i)).at(k.at(i)-1) << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
