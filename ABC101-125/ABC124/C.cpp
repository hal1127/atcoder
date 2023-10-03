#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    string s;   cin >> s;

    ll ans1 = 0;
    for(ll i = 0; s[i]; i++){
        if(i % 2 == 0){
            if(s[i] == '0') ans1++;
        }
        else{
            if(s[i] == '1') ans1++;
        }
    }

    ll ans2 = 0;
    for(ll i = 0; s[i]; i++){
        if(i % 2 == 0){
            if(s[i] == '1') ans2++;
        }
        else{
            if(s[i] == '0') ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;
}