#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  rep(i, 0, N) {
    cin >> a.at(i);
  }
  vector<int> b(N);
  rep(i, 0, N) {
    b.at(i) = a.at(i);
  }

  if (b.at(0) > x) {
    b.at(0) = x;
  }
  rep(i, 0, N-1) {
    if (b.at(i)+b.at(i+1) > x) {
      b.at(i+1) = x-b.at(i);
    }
  }
  cout << accumulate(all(a), 0) - accumulate(all(b), 0) << endl;
}
