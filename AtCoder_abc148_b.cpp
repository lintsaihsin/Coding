#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string str1;
    string str2;
    cin >> str1 >> str2;
    for (int i = 0; i < n; ++i)
    {
        cout << str1[i]<<str2[i];
    }
    return 0;
}