#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int R, G, B, N;
  cin >> R >> G >> B >> N;

  int cnt = 0;
  for (int r = 0; r * R <= N; r++) {
    for (int g = 0; (g * G + r * R) <= N; g++) {
      if ((N - r*R - g*G) % B == 0) cnt++;
    }
  }

  cout << cnt << endl;
}
