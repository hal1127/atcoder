#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll N;
  cin >> N;

  cout << (-(1LL << 31) <= N && N < (1LL << 31) ? "Yes" : "No") << endl;
}
