#include<iostream>
#include<cmath>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
    int d, n;
    cin >> d >> n;

    if(n <= 99){
        cout << n;
    }
    else{
        cout << 101;
    }
    int i = 0;
    while(i < d){
        cout << "00";
        i++;
    }
    cout << endl;
}