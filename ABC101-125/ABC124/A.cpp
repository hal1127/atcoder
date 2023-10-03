#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int a, b;   cin >> a >> b;

    int ans = 0;
    ans += max(a, b);

    if(max(a, b) == a){
        a -= 1;
    }
    else{
        b -= 1;
    }

    ans += max(a, b);

    cout << ans << endl;
}