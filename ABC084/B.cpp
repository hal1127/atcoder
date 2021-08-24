
#include<iostream>
#include<string>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int a, b;
    string  s;  cin >> a >> b >> s;

    bool numcheck1 = true, numcheck2 =true;
    rep(i, a){
        if(s[i] < '0' || '9' < s[i]){
            numcheck1 = false;
            break;
        }
    }
    rep(i, b){
        if(s[a + 1 + i] < '0' || '9' < s[a + i]){
            numcheck2 = false;
            break;
        }
    }

    if(numcheck1 && numcheck2 && s[a] == '-'){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << endl;
}