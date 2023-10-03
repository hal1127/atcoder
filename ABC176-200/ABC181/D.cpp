#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  string S;
  cin >> S;

  // Sに含まれる数字をカウントする（上限4個）
  map<char, int> num_cnt;
  rep (i, 0, S.size())
    if (num_cnt[S[i]] < 4) num_cnt[S[i]]++;

  // num_cntから文字列を作る
  string T = "";
  for (auto nc : num_cnt) {
    rep (i, 0, nc.second)
      T += nc.first;
  }

  if (T.size() == 1) {
    if (atoi(T.c_str()) % 8 == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  } else if (T.size() == 2) {
    if (atoi(T.c_str()) % 8 == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    swap(T[0], T[1]);
    if (atoi(T.c_str()) % 8 == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  } else if (T.size() == 3) {
    rep (i, 0, T.size())
      rep (j, 0, T.size())
        rep (k, 0, T.size())
          if (i != j && i != k && j != k) {
            string U = "";
            U += T[i]; U += T[j]; U += T[k];
            int N = atoi(U.c_str());
            if (N % 8 == 0) {
              cout << "Yes" << endl;
              return 0;
            }
          }
  } else {
    // Tから4個選んで文字列を作る nP4
    // P(9*4, 4) = 1,413,720 で間に合う
    rep (i, 0, T.size())
      rep (j, 0, T.size())
        rep (k, 0, T.size())
          rep (l, 0, T.size())
            if (i != j && i != k && i != l && j != k && j != l && k != l) {
              string U = "";
              U += T[i]; U += T[j]; U += T[k]; U += T[l];
              int N = atoi(U.c_str());
              if (N % 8 == 0) {
                cout << "Yes" << endl;
                return 0;
              }
            }
  }
  cout << "No" << endl;
}
