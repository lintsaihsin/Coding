#include<bits/stdc++.h>
using namespace std;
struct area
{
    int s;
    int t;
    bool operator<(const area &rhs)const{
        return t < rhs.t || (t == rhs.t && s > rhs.s);
    }
};
int main()
{
    int t, l = 0;
    cin >> t;
    while(t--){
        if(l) puts("");
        l = 1;
        bool flag[20005] = {0};
        int ad, p;
        cin >> ad >>p;
        vector<area> v;
        v.clear();
        for(int i = 0; i < p; i++){
            int a, b;
            cin >> a >> b;
            if(a> b) swap(a, b);
            v.push_back(area{a,b});
        }
        vector<int> ans;
        ans.clear();
        sort(v.begin(), v.end());
        for(auto i : v){
            int cnt = 0;
            for(int j = i.s; j <= i.t; j++){
                if(flag[j+10000]){
                    cnt++;
                }
            }
            for(int j = i.t; j >= i.s && cnt < ad; j--){
                if(!flag[j+10000]){
                    cnt++;
                    flag[j+10000] = true;
                    ans.push_back(j);
                }
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(auto i : ans){
            cout << i << endl;
        }
    }
    return 0;
}