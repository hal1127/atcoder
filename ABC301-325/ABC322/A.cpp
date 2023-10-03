#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define rrep(i, m, n) for (int i = m; i >= n; i--)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    string S;
    int N;

    cin >> N;
    cin >> S;

    rep (i, 0, N-2) {
        if (S.substr(i, 3) == "ABC") {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
