#include <bits/stdc++.h>
using namespace std;

// #define REP(x, y, z) for(int x = (y); x <= (z); x++)
// #define maxn 100+5
// #define PII pair<int, int>
// #define MP make_pair
// #define F first
// #define S second
// #define EB emplace_back

int main()
{
    int n, k, m;
    while(cin >> n >> k >> m)
    {
        if(n == 0 && k == 0 && m == 0) break;
        vector <int> v;
        v.clear();
        for(int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }

        int f, s;
        f = n-1;
        s = 0;
        int fl = 0;
        while(!v.empty())
        {
            if(fl > 0)  cout << ",";
            else fl = 1;
            int ans1, ans2; 
            //printf("f : %d, s : %d\n", f, s);
            ans1 = (f + k) % v.size();
            ans2 = (v.size() + s - (m % v.size())) % v.size();
            
            //printf("ans1 : %d, ans2 : %d \n", ans1, ans2);
            if(ans1 == ans2)
            {
                
                printf("%3d", v[ans1]);
                v.erase(v.begin() +  (ans1));
                
                if(ans1 > 0)f = ans1-1;
                else f = v.size()-1;
                s = ans1;
            }
            else
            {
                
                printf("%3d%3d", v[ans1], v[ans2]);
                f = ans1;
                s = ans2;
                if(ans1 > ans2) 
                {
                    
                    v.erase(v.begin() + ans1);
                    v.erase(v.begin() + ans2);
                    ans1--;
                }
                else 
                {
                    
                    v.erase(v.begin() + ans2);
                    v.erase(v.begin() + ans1);
                    ans2--;
                }
                // ans1--;
                // ans2--;
                // if(ans1 == 0) ans1 = v.size();
                // if(ans2 == 0) ans2 = v.size();
                // if(ans1 > ans2) ans1--;
                // else ans2--;
                // if(ans1 == 0) ans1 = v.size();
                // if(ans2 == 0) ans2 = v.size();
                if(ans1 > 0)f = ans1-1;
                else f = v.size()-1;
                
                s = ans2;
            }
            // for(int i = 0; i < v.size(); i++)
            // {
            //     cout <<i << " " <<  v[i] << endl;
            // }
            // cout << endl;
        }
        cout << endl;
    }
    return 0;
}