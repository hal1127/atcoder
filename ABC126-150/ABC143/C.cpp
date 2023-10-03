#include<iostream>

using namespace std;

int main()
{
    char c , tmp = '\0';
    int n;
    int i = 0;
    cin >> n;

    for(int j = 0; j < n; j++){
        cin >> c;
        if(c != tmp){
            i++;
            tmp = c;
        }
    }

    cout << i << '\n';
}