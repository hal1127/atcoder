#include<iostream>

using namespace std;

int Ans[100000];

int main()
{
    int n;
    cin >> n;

    int A;
    for(int i = 0; i < n; i++){
        cin >> A;
        Ans[A - 1] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << Ans[i] << " ";
    }
    cout << "\n";
}