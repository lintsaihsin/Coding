#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    while(cin >> a >> b && a != 0 || b != 0)
    {
        int cnt = 0;
        int tmp = 0;
        while(1)
        {
            if((a % 10 + b % 10 + tmp) >= 10)
            {
                tmp = (a % 10 + b % 10 + tmp) /10;
                cnt += tmp;
            }
            else tmp = 0;
            a /= 10;
            b /= 10;
            if(a == 0 && b == 0 && (a % 10 + b % 10 + tmp) < 10)break;
        }
        if(cnt > 1) cout << cnt << " carry operations." << endl;
        else if(cnt == 1)cout << cnt << " carry operation." << endl;
        else cout << "No carry operation." << endl;
    }
    return 0;
}