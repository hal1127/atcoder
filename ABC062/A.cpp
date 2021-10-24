#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int x, y;
  cin >> x >> y;

  set<int> A = {1, 3, 5, 7, 8, 10, 12};
  set<int> B = {4, 6, 9, 11};
  set<int> C = {2};

  if (A.count(x) && A.count(y)) {
    cout << "Yes" << endl;
  } else if (B.count(x) && B.count(y)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
