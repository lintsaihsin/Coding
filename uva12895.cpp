#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>> t;
    while(t--)
    {
        int num;
        cin >> num;
        string str;
        str = to_string(num);
        double n = 0;
        for (int i = 0; i < str.size(); ++i) n +=pow( (str[i] - '0') , str.size());
        if(num == n) cout << "Armstrong" << endl;
        else cout << "Not Armstrong" << endl;
    }
    return 0;
}