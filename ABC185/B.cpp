#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int N, M, T;
int bat = N;
vector<int> A(M), B(M);

int diff_bat(int start, int end)
{
  return end-start;
}

string solve()
{
  bat -= diff_bat(0, A[0]);
  rep (i, 0, M) {
    if (bat <= 0) return "No";
    
  }
}

int main()
{
  cin >> N >> M >> T;
  rep (i, 0, N) cin >> A[i] >> B[i];


}
