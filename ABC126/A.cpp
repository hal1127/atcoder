#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    char s[n];
    cin >> s;

    s[k - 1] = tolower(s[k - 1]);

    cout << s << endl;
}