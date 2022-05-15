#include <bits/stdc++.h>
using namespace std;

// #define REP(x, y, z) for(int x = (y); x <= (z); x++)
// #define maxn 100+5
// #define PII pair<int, int>
// #define MP make_pair
// #define F first
// #define S second
// #define EB emplace_back
int alp[30] = {0};
int alp2[30] = {0};
int main()
{
    int t;
    while(cin >> t)
    {
        if(t == -1) break;
        else cout << "Round " << t << endl;
        string crans, myans;
        cin >> crans >> myans;
        memset(alp, 0, sizeof(alp));
        memset(alp2, 0, sizeof(alp2));
        set <char> stans;
        set <char> st;
        for(int i = 0; i < crans.size(); i++)
        {
            stans.insert(crans[i]);
        }
        int cnt = 0;
        for(int i = 0; i < myans.size(); i++)
        {
            if(stans.count(myans[i]))
            {
                st.insert(myans[i]);
                stans.erase(myans[i]);
            }
            else if(st.count(myans[i]))
            {
                continue;
            }
            else
            {
                cnt++;
                st.insert(myans[i]);
            }

            if(stans.size() == 0) break;
        }
        //cout << cnt << " " << stans.size() << endl;
        if(cnt == 0 && stans.size() == 0) cout << "You win." << endl;
        else if(cnt < 7)
        {
            if(stans.size() == 0) cout << "You win." << endl;
            else cout << "You chickened out." << endl;
        }
        else cout << "You lose." << endl;
    }
    return 0;
}