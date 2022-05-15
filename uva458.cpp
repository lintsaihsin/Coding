#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin >> str)
    {
        for (int i = 0; i < str.size(); ++i)cout << (char)(str[i] - 7);
        cout << endl;
    }
    return 0;
}