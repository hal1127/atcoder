#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep (i, 0, N) {
    cin >> A[i];
  }

  // 全ての要素を1にする必要がある。
  // 最初1は1つあり、1回の操作でK-1個の要素を1にできる。
  // ceil( (N - 1) / (K - 1) )で全ての要素を被覆できる
  // x / yの切り上げは(x + y - 1) / y
  cout << (N - 1 + K - 2) / (K - 1) << endl;
}
