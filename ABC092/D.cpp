#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int H = 100, W = 100;

pair<int, int> index_to_grid(int i)
{
  int c = i / H;
  int r = i % H;
  return make_pair(c, r);
}

int main()
{
  int A, B;
  cin >> A >> B;
  vector<string> G(H);
  string Wh, Bl;
  rep (i, 0, W) {
    Wh += '.';
    Bl += '#';
  }
  rep (i, 0, H/2) {
    G.at(i) = Wh;
  }
  rep (i, H/2, H) {
    G.at(i) = Bl;
  }


  rep (i, 0, A-1) {
    pair<int, int> grid = index_to_grid(2*i);
    G.at(H-1-2*(grid.first)).at(W-1-grid.second) = '.';
  }
  rep (i, 0, B-1) {
    pair<int, int> grid = index_to_grid(2*i);
    G.at(2*grid.first).at(grid.second) = '#';
  }


  printf("%d %d\n", H, W);
  for (auto g : G) {
    cout << g << endl;
  }

}
