#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

string S[1000];
int N;
/*
........
....#...
....#...
........
....#...
....#...
........
........

..#.....
........
....#...
.....#..
....#.#.
....#...
........
........

......#.
.....#..
....#...
........
..#.#.#.
....#...
........
........

O(N*((N-5)+(N-5))*6+(N-5)^2*6) = 17,880,150
*/

string solve()
{
  rep (c, 0, N) {
    rep (r, 0, N-5) {
      int cnt = 0;
      rep (dr, 0, 6) if (S[c][r+dr] == '#') cnt++;
      if (cnt >= 4) return "Yes";
    }
  }

  rep (r, 0, N) {
    rep (c, 0, N-5) {
      int cnt = 0;
      rep (dc, 0, 6) if (S[c+dc][r] == '#') cnt++;
      if (cnt >= 4) return "Yes";
    }
  }

  rep (c, 0, N-5) {
    rep (r, 0, N-5) {
      int cnt = 0;
      rep (d, 0, 6) if (S[c+d][r+d] == '#') cnt++;
      if (cnt >= 4) return "Yes";
    }
  }

  rep (c, 0, N-5) {
    rep (r, 0, N-5) {
      int cnt = 0;
      rep (d, 0, 6) if (S[c+d][r+5-d] == '#') cnt++;
      if (cnt >= 4) return "Yes";
    }
  }

  return "No";
}

int main()
{
  cin >> N;
  rep (i, 0, N) cin >> S[i];

  cout << solve() << endl;
}
