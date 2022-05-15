#include <bits/stdc++.h>
using namespace std;

int n, m;
bool flag;

void dfs(int f, int s)
{
    if(flag) return;
    if(f == m)
    {
        flag = true;
        return;
    }
    if(f+s <= n)
    {
        dfs(f+s, s+2);
    } 
    if(f-s > 0)
    {
        dfs(f-s, s+2);
    }
}
int main(int argc, char const *argv[])
{
    while(cin >> n >> m && n != 0 && m != 0 )   
    {
        flag = false;
        if(n >= 49) flag = true;
        dfs(1,3);
        if(flag) cout << "Let me try!" << endl;
        else cout << "Don't make fun of me!" << endl;
    }
    return 0;
}