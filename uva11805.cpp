#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        b = (b + c) % a;
        if(b == 0) b = a;
        cout << "Case " << i << ": " << b << endl;
    }
    return 0;
}