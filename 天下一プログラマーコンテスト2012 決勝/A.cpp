#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<int> fibdp(100, 0);
int get_fib(int k)
{
  if (k == 0) return 1;
  if (k == 1) return 2;
  if (fibdp.at(k) != 0) return fibdp.at(k);
  return fibdp.at(k) = get_fib(k-2) + get_fib(k-1);
}

vector<int> dp;
int dfs(int k)
{
  if (k == 0) return 0;
  if (dp.at(k) != 0) return dp.at(k);
  int ret = 2e9;
  // fibdpには要素数が100なのでi=99までループされる
  REP(i, fibdp.size()) {
    // get_fib(i)がkを超えたらbreak
    // dp.at(k)には2e9が代入される
    if (k < get_fib(i)) break;
    ret = min(ret, dfs(k - get_fib(i)) + 1);
  }
  return dp.at(k) = ret;
}

int main()
{
  int n;
  cin >> n;
  if (n > 1e5) return 0;
  REP(i, n+1) {
    dp.push_back(0);
  }

  cout << dfs(n) << endl;
}
