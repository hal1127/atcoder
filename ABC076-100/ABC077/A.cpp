#include<iostream>
#include<string>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    string c[2]; rep(i, 2) cin >> c[i];

    rep(i, 3){
        char tmp = c[0][0];
        c[0][0] = c[0][2];
        c[0][2] = tmp;
    }

    if(c[0].compare(c[1]) == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
}