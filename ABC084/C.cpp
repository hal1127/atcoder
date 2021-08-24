#include<iostream>
#include<vector>

#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;

using namespace std;

int main()
{
    int n;  cin >> n;
    vector <int> c(n-1), s(n-1), f(n-1);
    rep(i, n - 1) cin >> c[i] >> s[i] >> f[i];

    rep(i, n){ //出発する駅　
        int t = 0;
        for(int j = i; j < n - 1; j++){ //自分がいる駅　n-1駅に着いたらやめる
            if(t < s[j]) t = s[j]; //着いた時間が始発時間より早いなら始発時間まで待つ
            else if(t % f[j] != 0){
                t += f[j] - t % f[j]; //もし、時間が5分間隔で電車が来てて
            }                         //時間が3分なら5-3%5=2分で3+2=5分まで待つ
            t += c[j]; //移動時間を足す
        }
        cout << t << endl;
    }
}