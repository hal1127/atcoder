#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// nをlen桁の2進数の配列にする
vector<int> to_bin_array(int n, int len)
{
  vector<int> res;
  while (n) {
    res.push_back(n % 2);
    n /= 2;
  }

  while (res.size() < len) res.push_back(0);

  reverse(all(res));

  return res;
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<vector<int>> x(N), y(N);
  rep (i, 0, N) {
    cin >> A.at(i);
    rep (j, 0, A.at(i)) {
      int tx, ty;
      cin >> tx >> ty;
      x.at(i).push_back(tx); y.at(i).push_back(ty);
    }
  }

  // rep (i, 0, N) {
  //     printf("人%d\n", i+1);
  //   rep (j, 0, A.at(i)) {
  //     printf("「人%dは%d」\n", x.at(i).at(j), y.at(i).at(j));
  //   }
  // }

  int ans = 0;
  rep (b, 0, 1<<N) {
    // 仮定
    vector<int> bin_array = to_bin_array(b, N);

    bool is_ok = true;
    // 全員が言っていることが仮定と同じだったらok
    rep (i, 0, N) {
      rep (j, 0, A.at(i)) {
        // 仮定の人[i]が嘘つきなら証言を無視
        if (bin_array.at(i)) {
          // 仮定のA[i]と証言が違うならスキップ
          if (bin_array.at(x.at(i).at(j)-1) != y.at(i).at(j)) {
            is_ok = false;
            break;
          }
        }
      }
      if (!is_ok) break;
    }
    if (is_ok) {
      ans = max(ans,
                accumulate(all(bin_array), 0));
    }
  }
  cout << ans << endl;
}
