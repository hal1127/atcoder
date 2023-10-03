#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

void printvec2(vector<vector<int>> v)
{
  rep(i, 0, 5) {
    rep(j, 0, 5) {
      cout << v.at(i).at(j) << " ";
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cin >> N;
  vector<int> lx(N), ly(N), rx(N), ry(N);
  rep (i, 0, N) {
    cin >> lx.at(i) >> ly.at(i) >> rx.at(i) >> ry.at(i);
  }

  vector<vector<int>> a(1001, vector<int>(1001, 0));

  rep (i, 0, N) {
    a.at(ly.at(i)).at(lx.at(i)) += 1;
    a.at(ry.at(i)).at(rx.at(i)) += 1;
    a.at(ly.at(i)).at(rx.at(i)) -= 1;
    a.at(ry.at(i)).at(lx.at(i)) -= 1;
  }

  rep (i, 0, a.size()) {
    rep (j, 1, a.at(0).size()) {
      a.at(i).at(j) += a.at(i).at(j-1);
    }
  }
  rep (i, 0, a.size()) {
    rep (j, 1, a.at(0).size()) {
      a.at(j).at(i) += a.at(j-1).at(i);
    }
  }

  map<int, int> cnt;
  rep (i, 1, N+1) {
    cnt[i];
  }
  rep (i, 0, a.size()) {
    rep (j, 0, a.at(0).size()) {
      cnt[a.at(i).at(j)] += 1;
    }
  }

  rep (i, 1, N+1) {
    cout << cnt.at(i) << endl;
  }
}