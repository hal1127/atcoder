#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// Input
int N;
vector<string> S;

set<string> users;

int main()
{
  cin >> N;
  S.resize(N);
  rep(i, 0, N) {
    cin >> S.at(i);
  }

  // 全体の計算量 O(N logN)
  // O(N)
  rep (i, 0, N) {
    // users.count(key): 二分探索
    // O(logN)
    if (!users.count(S.at(i))) {
      users.insert(S.at(i));
      cout << i+1 << endl;
    }
  }
}