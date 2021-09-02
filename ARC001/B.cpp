#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

bool ok(int t)
{
  return t >= 0 && t <= 40;
}

int main()
{
  int A, B;
  cin >> A >> B;
  // AとBが同じなら何もいないで終了
  if (A == B) {
    cout << 0 << endl;
    return 0;
  }

  // ボタン列挙
  vector<int> bt = {1, 5, 10, -1, -5, -10};

  // 調べる温度<温度, 回数>
  queue<pair<int, int>> que;
  que.push(make_pair(A, 0));

  // 温度に到達済みか(0~40)
  vector<bool> temp(41);
  // A℃はすでに到達済み
  temp.at(A) = true;

  // 幅優先探索
  while(!que.empty()) {
    auto q = que.front();
    que.pop();
    // 全てのボタンのパターンを調べる
    for (auto b : bt) {
      q.first += b;
      q.second++;

      // 温度が範囲内 && 到達済みでない なら
      // 短絡評価のためokの返り値がfalseならその後ろの式は評価されない
      // つまり、out_of_rangeは出ない
      if (ok(q.first) && !temp.at(q.first)) {
        // 到達済みにしておく
        temp.at(q.first) = true;
        // Bの温度になったら回数を出力して終了
        if (q.first == B) {
          cout << q.second << endl;
          return 0;
        }
        // キューに追加
        que.push(q);
      }
      // 別のボタンで使うので戻しておく
      q.first -= b;
      q.second--;
    }
  }
}
