#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int Q;
  cin >> Q;
  vector<int> t(Q), x(Q);
  rep (i, 0, Q) {
    cin >> t.at(i) >> x.at(i);
  }

  deque<int> cards;
  rep (i, 0, Q) {
    if (t.at(i) == 1) {
      cards.push_front(x.at(i));
    } else if (t.at(i) == 2) {
      cards.push_back(x.at(i));
    } else {
      cout << cards.at(x.at(i)-1) << endl;
    }
  }
}
