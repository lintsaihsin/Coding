#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c, s;
    int counter = 0;
    while(cin>> n && n){
        vector<int> v[80];
        vector<int> score;
        for(int i=0; i<n; i++){
            cin>> a>> b>> c>> s;
            v[i].push_back(a);
            v[i].push_back(b);
            v[i].push_back(c);
            score.push_back(s);
        }
        int maxs = -1;
        bool used[10] = {0};
        for(int i=0; i<n; i++){
            int sum = 0;
            used[v[i][0]] = true;
            used[v[i][1]] = true;
            used[v[i][2]] = true;
            sum += score[i];
        
            for(int j=i+1; j<n; j++){
                if(used[v[j][0]] || used[v[j][1]] || used[v[j][2]])
                    continue;
                used[v[j][0]] = true;
                used[v[j][1]] = true;
                used[v[j][2]] = true;
                sum += score[j];
            
                for(int k=j+1; k<n; k++){
                    if(used[v[k][0]] || used[v[k][1]] || used[v[k][2]])
                        continue;
                
                    sum += score[k];
                    maxs = max( maxs, sum);
                    sum -= score[k];
                }
                sum -= score[j];
                used[v[j][0]] = false;
                used[v[j][1]] = false;
                used[v[j][2]] = false;
            }
            used[v[i][0]] = false;
            used[v[i][1]] = false;
            used[v[i][2]] = false;
        }
        printf("Case %d: %d\n", ++counter, maxs);
    }
    return 0;
}