#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
    int a, b;   cin >> a >> b;

    if((a + b) % 2){
        cout << "IMPOSSIBLE";
    }
    else{
        cout << (a + b) / 2;
    }
    cout << endl;
}