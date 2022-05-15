#include <bits/stdc++.h>
using namespace std;
string str;
int sz;
struct node
{
    int next[30];
    int val;
};
node tree[300005];
int dp[300005];
int mod = 20071027;

void insert(string word){
    int u = 0;
    for(int i = 0; i < word.size(); i++){
        int v = word[i] - 'a';
        if(tree[u].next[v]){
            u = tree[u].next[v];
        }
        else{
            tree[u].next[v] = sz;
            sz++;
            u = tree[u].next[v];
            memset(tree[u].next, 0, sizeof(tree[u].next));
            tree[u].val = 0;
        }
    }
    tree[u].val = 1;
}

void find(int i){
    int u = 0;
    for(int j = i; j < str.size(); j++){
        int v = str[j] - 'a';
        if(!tree[u].next[v])
            return;
        u = tree[u].next[v];
        if(tree[u].val)
            dp[i] = (dp[i] + dp[j+1]) % mod;
    }
}

int main(int argc, char const *argv[])
{
    int cs = 0;
    while(cin >> str){
        memset(dp, 0, sizeof(dp));
        memset(tree[0].next, 0, sizeof(tree[0].next));
        tree[0].val = 0;
        sz = 1;
        int n;      
        cin >> n;
        string word;
        while(n--){
            cin >> word;
            insert(word);
        }
        dp[str.size()] = 1;
        for(int i = str.size()-1; i >= 0; i--){
            find(i);
        }
        printf("Case %d: %d\n", ++cs, dp[0]);
    }
    return 0;
}