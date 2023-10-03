#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int k;  cin >> k;

    cout << (k / 2) * ((k + 1) / 2) << endl; //3 / 2 = 1(偶数の個数), 4 / 2 = 2(奇数の個数)
                                             //6 / 2 = 3(偶数の個数), 7 / 2 = 3(奇数の個数)
}