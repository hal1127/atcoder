#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  string large, small;
  int m;
  // 単位換算探索木
  map<string, vector<pair<int, string>>> unit;
  REP(i, N) {
    cin >> large >> m >> small;
    if (unit.count(large)) {
      unit.at(large).push_back(make_pair(m, small));
    } else {
      unit[large] = {make_pair(m, small)};
    }
  }

  queue<tuple<string, int, string>> que;
  tuple<string, int, string> max_unit = make_tuple("", 0, "");

  // 幅優先探索をunitの数だけする
  for (auto u : unit) {
    for (auto c : u.second) {
      que.push(make_tuple(u.first, c.first, c.second));
    }
    while (!que.empty()) {
      tuple<string, int, string> q = que.front();
      que.pop();

      if (get<1>(q) > get<1>(max_unit)) {
        max_unit = q;
      }
      // 単位換算表にqのsmallの単位があるならキューに追加
      if (unit.count(get<2>(q))) {
        for (auto c : unit.at(get<2>(q))) {
          que.push(make_tuple(get<0>(q), c.first*get<1>(q), c.second));
        }
      }
    }
  }
  printf("1%s=%d%s\n", get<0>(max_unit).c_str(), get<1>(max_unit), get<2>(max_unit).c_str());
}
