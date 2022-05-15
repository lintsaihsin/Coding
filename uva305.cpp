#include <bits/stdc++.h>
using namespace std;

int k, jos[15];
bool judge(int k, int m){
    int st = 0, n = 2*k;
    while(n > k){
        st = (st + m -1) % n;
        if(st < k) return false;
        else n--;
    }
    return true;
}
int main(){
    for(int k = 1; k <= 13; k++){
        for(int m = k+1; ; m++){
            if(judge(k, m)){
                jos[k] = m;
                break;
            }
        }
    }
    while(cin >> k && k){
        cout << jos[k] << endl;
    }
}