#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> G[5050];
int dist[5050];
int maxd, maxnode;
void dfs(int u, int pa, int dept){
    dist[u] = max(dist[u], dept);
    if(dist[u] > maxd){
        maxd = dist[u];
        maxnode = u;
    }

    for(int i=0;i<G[u].size(); i++){
        if(G[u][i] != pa)
            dfs(G[u][i], u, dept+1);
    }
}
int main(){
    while(cin>> n){
        memset(dist, 0, sizeof(dist));
        maxd = 0;
        for(int i = 1; i <= n; i++){
            G[i].clear();
            int k;
            cin>> k;
            while(k--){
                int x;
                cin>> x;
                G[i].push_back(x);
            }
        }
        dfs(1, -1, 0); 
        dfs(maxnode, -1, 0);
        dfs(maxnode, -1, 0);
        int mind = 1e9;
        for(int i=1; i<=n; i++){
            mind = min(mind, dist[i]);
        }
        printf("Best Roots  :");
        for(int i=1;i<=n;i++){
            if(mind == dist[i]){
                printf(" %d", i);
            }
        }
        puts("");

        printf("Worst Roots :");
        for(int i=1;i<=n;i++){
            if(maxd == dist[i]){
                printf(" %d", i);
            }
        }
        puts("");

    }
    return 0;
}