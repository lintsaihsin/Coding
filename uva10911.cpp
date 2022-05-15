#include <bits/stdc++.h>
using namespace std;

pair<double, double>pa[16];
bool vis[16];
double ans;
int n;
double dis(pair<double, double>p1, pair<double, double >p2){
    double x = p1.first - p2.first;
    double y = p1.second - p2.second;
    return sqrt(x * x + y * y);
}
void dfs(int cur, double sum){
    if(cur == n) {
        ans = min(ans, sum);
        return;
    }
    if(sum > ans){
        return;
    }
    int i;
    for(i = 0; i < 2 * n; i++){
        if(vis[i] == 0){
            break;
        }
    }
    vis[i] = true;
    for(int j = i + 1; j < 2 * n; j++){
        if(!vis[j]){
            vis[j] = true;
            dfs(cur + 1, sum + dis(pa[i], pa[j]));
            vis[j] = false;
        }
    }
    vis[i] = false;
}
int main(){
    string st;
    int cnt = 0;
    while(cin >> n && n != 0){
        for(int i = 0; i < 2 * n; i++){
            cin >> st >> pa[i].first >> pa[i].second;
        }
        memset(vis, 0, sizeof(vis));
        ans = double(INT_MAX);
        dfs(0, 0);
        cout <<"Case " << ++cnt <<": "<<fixed << setprecision(2)<< ans << '\n';
    }
}