#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string S, T;
  cin >> S >> T;

  if (S == T) {
    cout << "Yes" << endl;
    return 0;
  }
  rep(i, 0, S.size()-1) {
    string U = T;
    char tmp = U.at(i);
    U.at(i) = U.at(i+1);
    U.at(i+1) = tmp;
    if (S == U) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
