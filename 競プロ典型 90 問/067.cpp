#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string N;
  cin >> N;
  int K;
  cin >> K;

  string O;
  string L = N;
  rep (i, 0, K) {
    int digit = 0;
    ll dec = 0;
    for (int j = 0; j < (int)L.size(); j++) {
      dec = dec * 8 + (L.at(j)-'0');
      digit++;
    }
    O = "";
    while (dec > 0) {
      O = char('0' + dec%9) + O;
      dec /= 9;
    }
    for (auto &o : O) {
      if (o == '8') o = '5';
    }
    L = O;
  }
  cout << (O == "" ? "0" : O) << endl;
}