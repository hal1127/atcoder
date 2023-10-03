#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double l = n /2;

    if(n % 2 == 0){
        cout << l / n << "\n";
    }
    else{
        cout << (l + 1) / n << "\n";
    }
}