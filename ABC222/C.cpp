#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

vector<string> A;

map<int, int> seiseki;

// 勝者の番号
int janken(int p1, int p2, int m)
{
  if (A.at(p1).at(m) == 'G') {
    if (A.at(p2).at(m) == 'G') return -1;
    if (A.at(p2).at(m) == 'C') return p1;
    if (A.at(p2).at(m) == 'P') return p2;
  }
  if (A.at(p1).at(m) == 'C') {
    if (A.at(p2).at(m) == 'G') return p2;
    if (A.at(p2).at(m) == 'C') return -1;
    if (A.at(p2).at(m) == 'P') return p1;
  }
  if (A.at(p1).at(m) == 'P') {
    if (A.at(p2).at(m) == 'G') return p1;
    if (A.at(p2).at(m) == 'C') return p2;
    if (A.at(p2).at(m) == 'P') return -1;
  }
  return -1;
}

int rank_comp(int l, int r)
{
  int p1s = seiseki.at(l), p2s = seiseki.at(r);
  if (p1s == p2s) {
    return l < r;
  } else {
    return p1s > p2s;
  }
}

int main()
{
  int N, M;
  cin >> N >> M;
  A.resize(2*N);
  rep (i, 0, 2*N) {
    cin >> A.at(i);
  }

  rep (i, 0, 2*N) {
    seiseki[i] = 0;
  }

  vector<int> ranking(2*N);
  rep (i, 0, 2*N){
    ranking.at(i) = i;
  }

  rep (i, 0, M) {
    rep (j, 0, N) {
      int p1 = ranking.at(2*j), p2 = ranking.at(2*j+1);
      int jwin = janken(p1, p2, i);
      if (jwin != -1) seiseki.at(jwin)++;
    }
    sort(all(ranking), rank_comp);
  }

  rep (i, 0, 2*N) {
    cout << ranking.at(i)+1 << endl;
  }
}
