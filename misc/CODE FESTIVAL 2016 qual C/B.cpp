#include<iostream>
#include<vector>
#include<algorithm>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

bool scope(int &a, int &b)
{
    return a > b; //降順
}

int main()
{
    int k, t;  cin >> k >> t;
    vector<int> a(t);   rep(i, t) cin >> a[i];

    sort(a.begin(), a.end(), scope);

    int sum = 0;
    for(int i = 1; i < t; i++){
        sum += a[i];
    }

    cout << max(a[0] - 1 - sum, 0) << endl;
}