#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iomanip>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

double sqr(double n){
    return n * n;
}

double dist(double x1, double x2, double y1, double y2)
{
    return sqrt(sqr(x1 - x2) + sqr(y1 - y2));
}

int main()
{
    int n; cin >> n;
    double x[n], y[n]; rep(i, n) cin >> x[i] >> y[i];
    vector<int> v(n); rep(i ,n) v[i] = i;
    double sum = 0.0;
    int conb = 1; for(int i = 2; i <= n; i++) conb *= i;

    do{
        for(int i = 0; i < n - 1; i++)
        sum += dist(x[v[i]], x[v[i + 1]], y[v[i]], y[v[i + 1]]);
    }while(next_permutation(v.begin(), v.end()));

    cout << fixed << setprecision(10) << sum / conb << endl;
}