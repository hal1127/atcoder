#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  ll A, B, C, D;
  cin >> A >> B >> C >> D;

  // rep (i, A, B+1) {
  //   cout << i << " ";
  //   if (i % C == 0) {
  //     cout << "ng";
  //   } else {
  //     cout << "ok";
  //   }
  //   cout << " " << i / C;
  //   cout << endl;
  // }

  ll to_a_div_c = (A-1) / C;
  ll to_a_div_d = (A-1) / D;
  ll to_b_div_c = B / C;
  ll to_b_div_d = B / D;

  ll to_A_div_cd = (A-1) / lcm(C, D);
  ll to_b_div_cd = B / lcm(C, D);

  cout << (B - A + 1) - (to_b_div_c - to_a_div_c) - (to_b_div_d - to_a_div_d) + (to_b_div_cd - to_A_div_cd) << endl;
}