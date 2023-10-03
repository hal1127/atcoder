#include<iostream>

using namespace std;

int main()
{
    int n;
    int s[2];
    int check[2] = {0};

    cin >> n;

    for(int i = 0; i < 2; i++){
        s[1 - i] = n % 100;
        n /= 100;
    }

    if(1 <= s[0] && s[0] <= 12){
        check[0] = true;
    }
    if(1 <= s[1] && s[1] <= 12){
        check[1] = true;
    }

    if(check[0] == true && check[1] == true){
        cout << "AMBIGUOUS\n";
    }
    else{
        if(check[0] == true){
            cout << "MMYY\n";
        }
        else{
            if(check[1] == true){
                cout << "YYMM\n";
            }
            else{
                cout << "NA\n";
            }
        }
    }
}