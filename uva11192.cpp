#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    while(cin >> t && t != 0)
    {
        string str;
        cin >> str;
        if(str != "0")
        {
            t = str.size() / t;
            for (int i = 0; i <= str.size()-t; i+=t)
            {
                for (int j = i+t-1; j >= i; j--)
                {
                    cout << str[j];
                }
            }
            cout << endl;
        }
        else break;
    }
    return 0;
}