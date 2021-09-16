#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

bool is_closed_kakko(string s)
{
  int cnt = 0;
  for (auto x : s) {
    if (x == '(') {
      cnt++;
    } else {
      cnt--;
    }
    if (cnt < 0) {
      return false;
    }
  }
  if (cnt == 0) {
    return true;
  }
  return false;
}

int main()
{
  int N;
  cin >> N;

  rep(i, 0, 1 << N) {
    string s = "";
    for (int j = N-1; j >= 0; j--) {
      if (i >> j & 1) {
        s += ')';
      } else {
        s += '(';
      }
    }
    if (is_closed_kakko(s)) {
      cout << s << endl;
    }
  }
}
