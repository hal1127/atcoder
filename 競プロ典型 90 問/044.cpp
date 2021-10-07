#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

// Input
int N, Q;
vector<int> A, T, x, y;

int d = 0;

void array_shift()
{
  d++;
}

pair<int, int> array_delta(int qx, int qy)
{
  qx -= d; qy -= d;
  while (qx < 0 || qy < 0) {
    if (qx < 0) qx += N;
    if (qy < 0) qy += N;
  }

  return {qx, qy};
}

void array_swap(int qx, int qy)
{
  auto p = array_delta(qx, qy);
  qx = p.first; qy = p.second;
  swap(A.at(qx), A.at(qy));
}

void ele_print(int qx)
{
  auto p = array_delta(qx, 0);
  qx = p.first;
  cout << A.at(qx) << endl;
}

void array_print()
{
  rep (i, 0, N) {
    auto p = array_delta(i, 0);
    int qx = p.first;
    cout << A.at(qx) << " ";
  }
  cout << endl;
}

int main()
{
  cin >> N >> Q;
  A.resize(N); T.resize(Q);
  x.resize(Q); y.resize(Q);
  rep (i, 0, N) {
    cin >> A.at(i);
  }
  rep (i, 0, Q) {
    cin >> T.at(i) >> x.at(i) >> y.at(i);
    x.at(i)--; y.at(i)--;
  }

  rep (i, 0, Q) {
    if (T.at(i) == 1) {
      array_swap(x.at(i), y.at(i));
    } else if (T.at(i) == 2) {
      array_shift();
    } else {
      ele_print(x.at(i));
    }
    // array_print();
  }
}
