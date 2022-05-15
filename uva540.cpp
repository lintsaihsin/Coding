#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cnt = 0;
    while(cin >> n && n != 0)
    {
        cnt++;
        cout << "Scenario #" << cnt << endl;
        queue<int> bt, t[1005];
        map<int, int> mp;
        while(!bt.empty()) bt.pop();
        for (int i = 0; i < n; ++i) while(!t[i].empty()) t[i].pop();
        mp.clear();
        for (int i = 0; i < n; ++i)
        {
            int t1;
            cin >> t1;
            for (int j = 0; j < t1; ++j) 
            {
                int x;
                cin >> x;
                mp[x] = i;
            }
        }
        string str;
        while(cin >> str)
        {
            if(str == "ENQUEUE")
            {
                int a;
                cin >> a;
                if(t[mp[a]].empty())
                {
                    bt.push(mp[a]);
                }
                t[mp[a]].push(a);
            }
            else if(str == "DEQUEUE")
            {
                int b;
                b = bt.front();
                cout << t[b].front() << endl;
                t[b].pop();
                if(t[b].empty()) bt.pop();

            }
            else if(str == "STOP") break;
        }
        cout << endl;
    }
    return 0;
}