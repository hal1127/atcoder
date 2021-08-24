#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int H[n];

    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> H[i];

        if(H[i] >= k){
            cnt++;
        }
    }

    cout << cnt << "\n";
}