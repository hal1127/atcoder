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
  vector<int> A(N);
  rep(i, 0, N) {
    cin >> A.at(i);
  }
  int Q;
  cin >> Q;
  vector<int> B(Q);
  rep(i, 0, Q) {
    cin >> B.at(i);
  }
  sort(all(A));
  vector<int> diff(Q);
  rep(i, 0, Q) {
    // 二分探索
    int left = -1;
    int right = N;
    while (right - left > 1) {
      int mid = left + (right - left) / 2;
      if (A.at(mid) <= B.at(i)) left = mid;
      else right = mid;
    }
    // end 二分探索
    int min1, min2;
    if (left == -1) {
      min1 = abs(B.at(i) - A.at(0));
      min2 = INF;
    } else if (left == N-1) {
      min1 = abs(B.at(i) - A.at(left));
      min2 = INF;
    } else {
      min1 = abs(B.at(i) - A.at(left));
      min2 = abs(B.at(i) - A.at(left+1));
    }
    diff.at(i) = min(min1, min2);
  }
  rep(i, 0, Q) {
    cout << diff.at(i) << endl;
  }
}
