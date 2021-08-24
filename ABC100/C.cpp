#include<iostream>
#include<cmath>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n]; rep(i, n) cin >> a[i];

    int ans = 0;
    int j;
    for(int i = 0; i < n; i++){
        for(j = 0; a[i] % 2 == 0; j++){
            a[i] /= 2;
        }
        ans += j;
    }

    cout << ans << endl;
}