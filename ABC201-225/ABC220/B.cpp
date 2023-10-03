#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
  int K;
  string A, B;
  cin >> K >> A >> B;
  ll adec = 0, bdec = 0;

  int dig = 0;
  for (int i = A.size()-1; i >= 0; i--) {
    adec += 1LL * (int)(A.at(i)-'0') * pow(K, dig);
    dig++;
  }
  dig = 0;
  for (int i = B.size()-1; i >= 0; i--) {
    bdec += 1LL * (int)(B.at(i)-'0') * pow(K, dig);
    dig++;
  }
  cout << adec * bdec << endl;
}
