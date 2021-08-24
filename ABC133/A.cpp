#include<iostream>

using namespace std;

int main()
{
    int a, b, n;
    cin >> n >> a >> b;

    if(a * n < b){
        cout << (a * n);
    }
    else{
        cout << b;
    }
    cout << endl;
}