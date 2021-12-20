#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, 0, N) cin >> S.at(i);
  map<string, int> meibo;
  rep(i, 0, N) meibo[S.at(i)]++;

  auto ans = accumulate(all(meibo), pair<string, int>(string(), 0),
                        [](pair<string, int> a, pair<string, int> b){
                          if (a.second < b.second) {
                            return b;
                          } else {
                            return a;
                          }});

  // int ma = 0;
  // string ans;
  // for (auto m : meibo) {
  //   if (m.second > ma) {
  //     ma = m.second;
  //     ans = m.first;
  //   }
  // }

  cout << ans.first << endl;
}
