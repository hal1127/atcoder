#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

string to_binary(ll n)
{
  string s;
  while (n != 0) {
    s += (n % 2 == 0 ? "0" : "2");
    n /= 2;
  }
  return s;
  reverse(all(s));
}

int main()
{
  ll K;
  cin >> K;

  cout << to_binary(K) << endl;
}
