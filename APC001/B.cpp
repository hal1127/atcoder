#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int diff = 0;

    for(int i = 0; i < n; i++){
        diff += b[i] - a[i];
    }

    int sosa1 = 0, sosa2 = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            sosa1 += a[i] - b[i];
        }
        else{
            sosa2 += (b[i] - a[i]) / 2;
        }
    }

    if(sosa2 < diff){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << '\n';
}