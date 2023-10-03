#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int tmp = k;
    int cnt;
    for(cnt = 1; tmp < n; cnt++){
        tmp += k - 1;
    }

    int check = 0;
    for(int i = 0; i  < k; i++){
        if(A[i] == 1 || A[n - 1 - i] == 1){
            check = 1;
        }
    }

    if(check == 0){
        cout << cnt + 1;
    }
    else{
        cout << cnt;
    }
    cout << endl;
}