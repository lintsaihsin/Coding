#include<bits/stdc++.h>
using namespace std;
char matrix[1005][1005] = {""};
int arr[1005][1005];
int dir[4][2] = {0,1,0,-1,1,0,-1,0};
int r, c;

struct node
{
    int x;
    int y;
    bool p;
    int dis;
};

int bfs(){
    node s;
    queue<node> q;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(matrix[i][j] == 'J')
                s = {i, j, 1, 0};
            else if(matrix[i][j] == 'F')
                q.push(node{i, j, 0, 0});
        }
    }
    q.push(s);
    arr[s.x][s.y] = 0;
    while(!q.empty()){
        node tmp = q.front();
        q.pop();
        if(tmp.p && (tmp.x == 0 || tmp.x == r-1 || tmp.y == 0 || tmp.y == c-1))
            return arr[tmp.x][tmp.y];
        for(int k = 0; k < 4; k++){
            int vx = tmp.x + dir[k][0];
            int vy = tmp.y + dir[k][1];
            if (vx >= 0 && vx < r && vy >= 0 && vy < c && matrix[vx][vy]=='.' && arr[vx][vy] == -1){
                arr[vx][vy] = tmp.dis + 1;
                q.push(node{vx, vy, tmp.p, arr[vx][vy]});
            }
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        memset(matrix, '\0', sizeof(matrix));
        memset(arr, -1, sizeof(arr));
        cin >> r >> c;
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                cin >> matrix[i][j];
        int sum = bfs();
        if(sum == -1)
            cout << "IMPOSSIBLE" << endl;
        else
            cout << sum+1 << endl;
    }
    return 0;
}