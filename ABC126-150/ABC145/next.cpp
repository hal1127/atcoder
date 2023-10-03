#include<iostream>
#include<vector>
#include<algorithm>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

void vprint(vector<int> v, int n)
{
    for(int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int n; cin >> n;
    cout << n << endl;
    vector<int> v(n);

    rep(i, n) v[i] = i;

    do{
        vprint(v, n);
    }while(next_permutation(v.begin(), v.end()));
}