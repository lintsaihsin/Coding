#include <bits/stdc++.h>
using namespace std;

int chan(string str)
{
    int mul = 1;
    int ttl = 0;
    for (int i = str.size() -1; i >= 0 ; i--)
    {
        ttl += (str[i] - '0')*mul;
        mul *= 2;
    }
    return ttl;
}
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d\n", &t);
    for (int i = 1; i <= t; ++i)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        int g;
        g = __gcd(chan(s1), chan(s2));
        if(g == 1) cout <<  "Pair #"<< i<< ": Love is not all you need!" << endl;
        else cout <<  "Pair #"<< i<< ": All you need is love!" << endl;
    }
    return 0;
}
