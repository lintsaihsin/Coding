#include <bits/stdc++.h>
using namespace std;
int cmp(int a, int b){
    return a > b;
}
int main(int argc, char const *argv[])
{
    int n;
    while(cin >> n && n){
        vector<int> v;
        v.clear();
        int fg = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int d;
            cin >> d;
            sum += d;
            v.push_back(d);
            if(d > n-1) fg = 1;
        }
        if(fg || sum%2){
            cout << "Not possible" << endl;
            continue;
        }
        int t = 0;
        while(t != n){
            sort(v.begin(), v.end(), cmp);
            for(int i = 1; i < v.size() && v[0] > 0; i++){
                if(v[i] <= 0) {
                    fg =1; 
                    break;
                }
                v[i]--;
                v[0]--;
            }
            if(v[0] > 0 || fg) {
                cout << "Not possible" << endl;
                break;
            }
            else t++;
        }
        if(t == n)cout << "Possible" << endl;
    }
    return 0;
}