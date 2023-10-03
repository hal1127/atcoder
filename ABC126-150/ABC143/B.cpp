#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int D[n];

    for(int i = 0; i < n; i++){
        cin >> D[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            sum += D[i] * D[j];
        }
    }

    cout << sum << '\n';
}