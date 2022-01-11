#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  vector<int> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

  cout << *lower_bound(all(a), 50) << endl;
}
