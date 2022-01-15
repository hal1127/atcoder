#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string abc;
  cin >> abc;
  int ans = atoi(abc.c_str());
  ans += (abc.at(1)-'0')*100;
  ans += (abc.at(2)-'0')*10;
  ans += (abc.at(0)-'0');
  ans += (abc.at(2)-'0')*100;
  ans += (abc.at(0)-'0')*10;
  ans += (abc.at(1)-'0');

  cout << ans << endl;
}
