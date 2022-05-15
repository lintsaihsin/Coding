#include<bits/stdc++.h>
using namespace std;
vector<char> ans;
string str;
int n;
void dfs(int x, int sum){
    ans.push_back(str[x]);
    if(sum == n){
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i];
        cout<<endl;
        ans.pop_back();
        return;
    }
    for(int i = x+1; i < str.size(); i++){
        if(i != x+1 && str[i] == str[i-1])
            continue;
        dfs(i, sum+1);
    }
    ans.pop_back();
    return;
}
int main(){
    while(cin>> str>> n){
        sort(str.begin(), str.end());
        ans.clear();
        for(int i=0;i<str.size();i++){
            if(str[i] == str[i-1])
                continue;
            dfs(i, 1);
        }
    }
    return 0;
}