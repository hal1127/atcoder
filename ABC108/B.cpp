#include<iostream>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x = x2 - x1, y = y2 - y1;

    cout << x2 - y << ' ' << y2 + x << ' ' << x1 - y<< ' ' << y1 + x;
}