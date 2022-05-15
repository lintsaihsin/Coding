#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    while(cin >> n >> m)
    {
        cout << n << " " << m << endl;
        if(n == 0 && m == 0) break;

        priority_queue<int> v;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            v.push(a);
        } 
        queue<int> qu;
        while(!v.empty())
        {
            int tmp;
            tmp = v.top();
            qu.push(tmp);
            v.pop();
        }
        priority_queue<int,vector<int>,greater<int>> even;
        for (int i = -m+1; i < m; ++i)
        {
            n = qu.size();
            for (int j = 0; j < n; ++j)
            {
                int t;
                if(!qu.empty())
                {
                    t = qu.front();
                    if(t % m == i)
                    {
                        if(t % 2 != 0) cout << t << endl;
                        else even.push(t);
                        qu.pop();
                    }
                    else 
                    {
                        qu.push(t);
                        qu.pop();
                    }
                }
            }

            while(!even.empty())
            {
                cout << even.top() << endl;;
                even.pop();
            }
        }
    }
    return 0;
}