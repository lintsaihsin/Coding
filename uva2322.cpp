#include <bits/stdc++.h>
using namespace std;

struct st
{
    int l;
    int w;
    bool operator<(const st &rhs)const{
        return l < rhs.l || (l == rhs.l && w < rhs.w);
    }
};

bool used[5100];
int main(){
    int cs;
    cin >> cs;
    while(cs--){
        memset(used, false , sizeof(used));
        vector<st> v;
        v.clear();
        int n;
        cin >> n;
        for(int i = 0; i < n ; i++){
            int ll, ww;
            cin >> ll >> ww;
            v.push_back(st{ll, ww});
        }
        sort(v.begin(), v.end());
        // for(auto i : v){
        //     cout << i.l << " " << i.w << endl; 
        // }
        int ans = 0;
        for(int i = 0; i < n ; i++){
            if(!used[i]){
                ans++;
                // cout << v[i].l << " " << v[i].w << " " << ans <<endl;
                int tmpw;
                tmpw = v[i].w;
                used[i] = true;
                for(int j = i+1; j < n; j++){
                    if(!used[j] && v[j].w >= tmpw) {
                        tmpw = v[j].w;
                        used[j] = true;

                    }
                }

            }
        }
        cout << ans << endl;
    }
}