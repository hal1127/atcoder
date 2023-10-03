#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
    int n;  cin >> n;
    int p[n];   rep(i, n) cin >> p[i];
    int r[n];   rep(i, n) r[i] = i + 1;

    int cnt = 0;
    rep(i, n){
        if((p[i] == r[i]) == false){
            cnt++;
        }
    }

    if(cnt == 2 || cnt == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
}