#include<iostream>

using namespace std;

int main()
{
    int n;
    int k = 0;
    cin >> n;
    int tmp = n;
    for(int i = 0; tmp != 0; i++){
        k += tmp % 10;
        tmp /= 10;
    }

    if(n % k == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << endl;
}