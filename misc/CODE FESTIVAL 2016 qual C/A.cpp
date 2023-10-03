#include<iostream>
#include<string>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    string s;
    cin >> s;

    int check_C = -1, check_F = -1;
    for(int i = 0; s[i]; i++){
        if(s[i] == 'C') check_C = i;
        if(s[i] == 'F') check_F = i;
    }
    if(check_C > -1 && check_F > -1 && check_C < check_F) cout << "Yes";
    else cout << "No";
    cout << endl;
}