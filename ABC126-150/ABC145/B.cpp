#include<iostream>
#include<string>
#include<cstring>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    char s1[n / 2 + 1] = {'\0'}, s2[n / 2 + 1] = {'\0'};

    if(n % 2){
        cout << "No" << endl;
    }
    else{
        for(int i = 0; i < (n / 2); i++){
            s1[i] = s[i];
            s2[i] = s[n/2 + i];
        }
        
        if(strcmp(s1, s2)){
            cout << "No";
        }
        else{
            cout << "Yes";
        }
        cout << endl;
    }
}