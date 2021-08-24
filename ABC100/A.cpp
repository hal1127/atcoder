#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a <= 8 && b <= 8){
        cout << "Yay!";
    }
    else{
        cout << ":(";
    }
    cout << endl;
}