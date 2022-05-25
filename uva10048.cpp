#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int c, s, q;
    int cs = 0;
    while(cin >> c >> s >> q){
        if(!c && !s && !q)
            break;
        if(cs)
            cout << endl;
        cs++;
        cout << "Case #" << cs << endl;
        int dis[105][105] = {0};
        for(int i = 1; i <= c; i++){
            for(int j = 1; j <= c; j++){
                dis[i][j] = 1e9;
            }
        }

        for(int i = 0; i < s; i++){
            int c1, c2, d;
            cin >> c1 >> c2 >> d;
            dis[c1][c2] = dis[c2][c1] = d;
        }

        for(int k = 1; k <= c; k++){
            for(int i = 1; i <= c; i++){
                for(int j = 1 ; j <= c; j++){
                    dis[i][j] = min(dis[i][j], max(dis[i][k] , dis[j][k]));
                }
            }
        }

        while(q--){
            int a, b;
            cin >> a >> b;
            if(dis[a][b] == 1e9)
                cout << "no path" << endl;
            else
                cout << dis[a][b] << endl;
        }
    }
    return 0;
}