#include <bits/stdc++.h>
using namespace std;
int n;
int p[100005];
int q[100005];
int ans; 

int go(int s){
    int fuel = p[s] - q[s];
    for(int i = (s + 1) % n; i != s; i = (i + 1) % n){
        if(fuel < 0) return i;
        fuel += p[i]-q[i];
    }S
    if(fuel < 0) return -1;

    return s;
}

int solve(){
    int start = 0;
    while(1){
        int finish = go(start);
        if(finish < start)
            return -1;
        if(finish == start)
            return start;
        start = finish;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> p[i];
        for(int i = 0; i < n; i++)
            cin >> q[i];
        int start = 0;
        int ans = solve();
        cout << "Case " << cs << ": ";
        if(ans < 0) cout << "Not possible" << endl;
        else cout << "Possible from station " << ans+1 << endl;
    }
    return 0;
}