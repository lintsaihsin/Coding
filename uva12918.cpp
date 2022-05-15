#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m, ans;
        cin >> n >> m;
        ans = n*(n-1)/2+(m-n)*n;
        cout << ans << endl;
    }
    return 0;
}