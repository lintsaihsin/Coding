#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    while(cin >> a >> b)
    {
        int tmp = a;
        while((a/b) > 0)
        {
            tmp += (a/b);
            a =(a/b) + (a%b);
        }
        cout << tmp << endl;
    }
    return 0;
}