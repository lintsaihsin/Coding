#include<bits/stdc++.h>
using namespace std;
vector<int> v;
double L;
int solve(){
    double bound = v[0]-1;
    int counter = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] > bound){
            bound = v[i] + L;
            counter++;
        }
    }
    return counter;
}
int main(){
    int cas;
    int wifi, house;
    cin>> cas;
    while(cas--){
        cin>> wifi>> house;
        v.clear();
        while(house--){
            int x;
            cin>> x;
            v.push_back(x);
        }

        if(wifi >= v.size()){
            puts("0.0");
            continue;
        }
        sort(v.begin(),v.end());
        double minn = 0, maxx = v[v.size()-1];
        while(maxx - minn >= 1e-3){
            L = (minn + maxx) / 2.0;
            
            int c = solve();
            if(c <= wifi)
                maxx = L;
            else
                minn = L;
        }
        printf("%.1f\n", L/2);

    }
    return 0;
}