#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B, C, D;

  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;

  cout << min(A, B) + min(C, D) << endl;
}
