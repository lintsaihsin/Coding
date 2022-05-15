#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    while(cin >> t && t != 0)
    {
        int x, y;
        cin >> x >> y;
        while(t--)
        {
            int a, b;
            cin >> a >> b;
            if( a == x || b == y) cout << "divisa" << endl;
            else if( a > x && b > y) cout << "NE" << endl;
            else if( a > x && b < y) cout << "SE" << endl;
            else if( a < x && b > y) cout << "NO" << endl;
            else if( a < x && b < y) cout << "SO" << endl;

        }

    }

    return 0;
}