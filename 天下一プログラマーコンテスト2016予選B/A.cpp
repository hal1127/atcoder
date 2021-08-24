#include<iostream>
#include<cmath>

using namespace std;

int f(int n, int cnt){
    cnt++;
    return (cnt < 3) ? f(floor((pow(n, 2) + 4.0) / 8.0), cnt) : floor((pow(n, 2) + 4.0) / 8.0);
}

int main()
{
    int n = 20;
    int cnt = 0;

    cout << f(n, cnt) << "\n";
}