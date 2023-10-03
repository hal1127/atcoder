#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    int da = abs(a - x), db = abs(b - x);

    if(da < db){
        cout << "A";
    }
    else{
        cout << "B";
    }
    cout << '\n';
}