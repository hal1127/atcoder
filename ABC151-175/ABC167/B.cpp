#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  // 引いたカードの枚数, 残り引けるカードの枚数, 得点（答え）
  int draw, remain = K, ans = 0;

  // Aのカードを引けるだけ引く
  draw = min(K, A);
  // draw * 1（Aの得点）だけ得点に加算
  ans += draw;
  // 引けるカードを引いた枚数だけ減らす
  remain -= draw;

  draw = min(remain, B);
  remain -= draw;

  draw = min(remain, C);
  remain -= draw;
  ans -= draw;

  cout << ans << endl;
}
