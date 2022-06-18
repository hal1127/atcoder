#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  if ((B - A) % 2) {
    cout << "Borys" << endl;
  } else {
    cout << "Alice" << endl;
  }
}
