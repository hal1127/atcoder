#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

string trim(string s, char trm_chr, int &l_cnt, int &r_cnt)
{
  int l = 0;
  rep (i, 0, s.size()) {
    if (s.at(i) != trm_chr) {
      l = i;
      break;
    }
  }
  int r = s.size()-1;
  for (int i = s.size()-1; i >= 0; i--) {
    if (s.at(i) != trm_chr) {
      r = i;
      break;
    }
  }

  string res = s.substr(l, r-l+1);
  l_cnt = l; r_cnt = s.size()-1 - r;
  return res;
}

int main()
{
  string S;
  cin >> S;

  // cout << trim(S, 'a') << endl;
  int l_cnt, r_cnt;
  string trmed_S = trim(S, 'a', l_cnt, r_cnt);
  int N = trmed_S.size();
  bool is_kaibun = true;
  rep (i, 0, N/2) {
    if (trmed_S.at(i) != trmed_S.at(N-1-i)) {
      is_kaibun = false;
      break;
    }
  }

  // printf("%d, %d\n", l_cnt, r_cnt);
  cout << (is_kaibun && l_cnt <= r_cnt ? "Yes" : "No") << endl;
}
