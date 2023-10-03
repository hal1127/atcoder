#include<iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    int X[d][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> X[j][i];
        }
    }

    int ans = 0;
    //ダブりなしfor文
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int sum = 0;

            for(int k = 0; k < d; k++){
                int diff = abs(X[k][i] - X[k][j]);
                sum += diff * diff;
            }

            for(int k = 0; k <= sum; k++){
                if(k * k == sum){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}