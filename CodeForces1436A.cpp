#include <bits/stdc++.h>
using namespace std;

int cal(int a)
{
    if(a <= 100) return cal(cal(a+11));
    else if(a >= 101) return a-10;
}
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    while(a--)
    {
        int n, m;
        cin >> n >> m;
        int ttl = 0;
        int num;
        while(n--)
        {
            cin >> num;
            ttl += num;
        }
        if(ttl == m) cout << "YES"<< endl;
        else cout << "NO" <<endl;
    }
    return 0;
}

