#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> P(N);
  rep (i, 0, N) cin >> P.at(i);

  priority_queue<int, vector<int>, greater<int>> que;
  rep(i, 0, K) que.push(P.at(i));
  int x = que.top(); que.pop();
  cout << x << endl;

  rep (i, K, N) {
    if (x < P.at(i)) {
      que.push(P.at(i));
      x = que.top(); que.pop();
    }
    cout << x << endl;
  }
}
