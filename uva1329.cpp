#include <bits/stdc++.h>
using namespace std;
int fa[20005], dis[20005];
int d = 0;
void findr(int a)
{
    while(a != fa[a])
    {
        d += dis[a];
        a = fa[a];
    }
}
void unit(int a, int b)
{
    fa[a] = b;
    dis[a] = abs(a - fa[a]) % 1000;
}
int main(int argc, char const *argv[])
{
    int ca;
    cin >> ca;
    while(ca--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; ++i) fa[i] = i;
        char c;
        while(cin >> c)
        {

            if(c == 'E')
            {
                d = 0;
                int a;
                cin >> a;
                findr(a);
                cout << d << endl;
            }
            else if( c == 'I')
            {
                int a, b;
                cin >> a >> b;
                unit(a,b);
            }
            else if( c == 'O') break;
        }

    }
    return 0;
}