#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string S;
  cin >> S;

  if (S[2] == S[3] && S[4] == S[5]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
