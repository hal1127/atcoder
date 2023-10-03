#include<iostream>

using namespace std;

int main()
{
    int ans = 0;

    for(int i = 0; i < 4; i++){
        char s;
        cin >> s;

        if(s == '+'){
            ans++;
        }
        else{
            ans--;
        }
    }

    cout << ans << endl;
}