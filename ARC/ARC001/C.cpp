#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// y, xが盤上ならok
//   0 1 2 3 4 5 6 7
// 0 . . . . . . . .
// 1 . . . . . . . .
// 2 . . . . . . . .
// 3 . . . . . . . .
// 4 . . . . . . . .
// 5 . . . . . . . .
// 6 . . . . . . . .
// 7 . . . . . . . .
bool ok(int y, int x) {
  return 0 <= y && 0 <= x && y <= 7 && x <= 7;
}

bool isPuttable(int y, int x, vector<string> chess) {
  // 方向8パターン
  for (int vy = -1; vy <= 1; vy++) {
    for (int vx = -1; vx <= 1; vx++) {
      // vx,vy共に0だと動かないのでスルー
      if (vx == 0 && vy == 0) continue;
      int ty = y, tx = x;
      ty += vy;
      tx += vx;
      while (ok(ty, tx)) {
        if (chess.at(ty).at(tx) == 'Q') return false;
        ty += vy;
        tx += vx;
      }
    }
  }
  return true;
}

// 深さ優先探索: deep-first-search
// dfs(0, 8, chess) = dfs(1, 8, chess) && dfs(2, 7, chess) && ...
// 探索木の枝が1つでもtrueになれば終了
bool dfs(int pos, int remain, vector<string> &chess) {
  // 残りの駒がなくなったら成功として終了
  if (remain == 0) return true;
  // 現在位置が最後に達してしまったら失敗として終了
  if (pos == 64) return false;

  int y = pos / 8;
  int x = pos % 8;

  // すでに駒が置かれている場所は駒を置かないといけない
  if (chess[y][x] == 'Q') {
    // 駒を置いても大丈夫なら、置いた体で探索を続ける
    if (isPuttable(y, x, chess)) {
      if (dfs(pos+1, remain-1, chess)) return true;
    }
  // 置かれてなければ、置く置かないの両方を試す
  } else {
    // 置ける場所なら、置いて探索を続ける
    if (isPuttable(y, x, chess)) {
      chess[y][x] = 'Q';
      // これで問題なく全て置けたら成功
      if (dfs(pos+1, remain-1, chess)) return true;
      // どこかで不都合があったら置かなかったパターンも試す
      chess[y][x] = '.';
    }

    if (dfs(pos+1, remain, chess)) return true;
  }
  return false;
}

int main()
{
  vector<string> c(8);
  REP(i, 8) {
    cin >> c.at(i);
  }

  if (dfs(0, 8, c)) {
    for (auto row : c) {
      for (auto ele : row) {
        cout << ele;
      }
      cout << endl;
    }
  } else {
    cout << "No Answer" << endl;
  }
}

