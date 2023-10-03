#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  rep (i, 0, N) cin >> a.at(i);

  vector<int> c(N);
  map<int, int> m;
  int r = 0;
  m[a.at(0)]++;
  rep(l, 0, N) {
    while (r < N-1 && m.size() < K) {
      r++;
      m[a.at(r)]++;
    }
    // すでに種類としてカウントしている数字ならrを進めても大丈夫
    while (r < N-1 && m.count(a.at(r+1))) {
      r++;
      m[a.at(r)]++;
    }
    c.at(l) = r;
    m.at(a.at(l))--;
    if (m.at(a.at(l)) == 0) m.erase(a.at(l));
  }
  rep (i, 0, N) {
    c.at(i) -= i-1;
  }
  cout << *max_element(all(c)) << endl;
}
