#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// Input
int N;
vector<vector<int>> A;
int M;
vector<int> X, Y;

vector<vector<bool>> kenaku;
int ans = INF;

int main()
{
  cin >> N;
  A.resize(N, vector<int>(N));
  rep (i, 0, N) {
    rep (j, 0, N) {
      cin >> A.at(i).at(j);
    }
  }
  cin >> M;
  X.resize(M);
  Y.resize(M);
  rep (i, 0, M) {
    cin >> X.at(i) >> Y.at(i);
  }
  kenaku.resize(N, vector<bool>(N, false));
  rep(i, 0, M) {
    kenaku.at(X.at(i)-1).at(Y.at(i)-1) = true;
    kenaku.at(Y.at(i)-1).at(X.at(i)-1) = true;
  }

  vector<int> P(N);
  rep (i, 0, N) P.at(i) = i;
  do {
    int time = 0; bool is_kenaku = false;
    rep (i, 0, N) {
      if (i < N - 1 && kenaku.at(P.at(i)).at(P.at(i+1))) is_kenaku = true;
      time += A.at(P.at(i)).at(i);
    }
    if (!is_kenaku) ans = min(ans, time);
  } while(next_permutation(all(P)));

  cout << (ans == (int)INF ? -1 : ans) << endl;
}
