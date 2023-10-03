#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// input
int N, L;

vector<int> dp;

int main()
{
  cin >> N >> L;

  dp.resize(N+1);
  dp.at(0) = 1;
  for (int i = 1; i <= N; i++) {
    if (i < L) dp.at(i) = dp.at(i - 1);
    else dp.at(i) = (dp.at(i - 1) + dp.at(i - L)) % (int)(1e9+7);
  }

  cout << dp.at(N) << endl;
}
