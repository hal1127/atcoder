#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

class UnionFind {
  public:
    vector<int> par;

    void init(int sz) {
      par = vector<int>(sz);
      rep(i, 0, sz) par.at(i) = i;
    }

    int root(int x) {
      if (par.at(x) == x) {
        return x;
      } else {
        return par.at(x) = root(par.at(x));
      }
    }

    int same(int x, int y) {
      return root(x) == root(y);
    }

    void unite(int x, int y) {
      x = root(x);
      y = root(y);
      if (x == y) return;

      par.at(x) = y;
    }
};

int H, W, Q;

UnionFind UF;
vector<vector<bool>> board;

void query1(int r, int c)
{
  for (int i = -1; i <= 1; i++) {
    if (i == 0) continue;
    rep(j, 0, 2) {
      int r2, c2;
      if (j == 0) {
        r2 = r + i;
        c2 = c;
      } else {
        r2 = r;
        c2 = c + i;
      }
      if (r2 < 1 || r2 > H || c2 < 1 || c2 > W) continue;
      if (!board.at(r2-1).at(c2-1)) continue;
      // 2次元配列を1次元化
      // (r, c)の上下左右に赤に塗られたマスがあればグループ化
      int node1 = (r - 1) * W + (c - 1);
      int node2 = (r2 - 1) * W + (c2 - 1);
      UF.unite(node1, node2);
    }
  }
  board.at(r-1).at(c-1) = true;
}

bool query2(int ra, int ca, int rb, int cb)
{
  if (!board.at(ra-1).at(ca-1) || !board.at(rb-1).at(cb-1)) return false;

  int node1 = (ra - 1) * W + (ca - 1);
  int node2 = (rb - 1) * W + (cb - 1);
  if (UF.same(node1, node2)) return true;
  return false;
}

int main()
{
  cin >> H >> W >> Q;
  board = vector<vector<bool>>(H, vector<bool>(W, false));

  UF.init(H*W);

  rep(i, 0, Q) {
    int t;
    cin >> t;
    if (t == 1) {
      int r, c;
      cin >> r >> c;
      query1(r, c);
    } else {
      int ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      cout << (query2(ra, ca, rb, cb) ? "Yes" : "No") << endl;
    }
  }
}
