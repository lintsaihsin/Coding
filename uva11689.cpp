#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int e, f, c;
        cin >> e >> f >> c;
        int ans = 0;
        e += f;
        while(e >= c)
        {
            ans += (e / c);
            e = (e % c) + (e / c);
        }
        cout << ans << endl;
    }
    return 0;
}