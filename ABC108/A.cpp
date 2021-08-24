#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int k;  cin >> k;

    int ans = 0;
    for(int i = 1; i <= k - 1; i++){
        for(int j = i + 1; j <= k; j++){
            if((i % 2 == 1 && j % 2 == 0) || (i % 2 == 0 && j % 2 == 1)){
                ans++;
            }
        }
    }

    cout << ans << endl;
}