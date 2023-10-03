#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N, M, T;
int bat;
vector<int> A(1000), B(1000);

int diff_bat(int start, int end)
{
  return end-start;
}

string solve()
{
  bat -= diff_bat(0, A[0]);
  rep (i, 0, M-1) {
    if (bat <= 0) return "No";
    bat = min(bat+diff_bat(A[i], B[i]), N);
    bat -= diff_bat(B[i], A[i+1]);
  }
  if (bat <= 0) return "No";
  bat = min(bat+diff_bat(A[M-1], B[M-1]), N);
  bat -= diff_bat(B[M-1], T);
  if (bat <= 0) return "No";
  else return "Yes";
}

int main()
{
  cin >> N >> M >> T;
  rep (i, 0, M) cin >> A[i] >> B[i];
  bat = N;

  cout << solve() << endl;
}
