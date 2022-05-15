#include<bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int a;
    int b;
};

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int n;
        vector<node> v;
        v.clear();
        scanf("%d\n", &n);
        if(!n){
            cout << "indeterminate" << endl;
            continue;
        }
        for (int i = 0; i < n; ++i){
            string strin;
            getline(cin, strin);
            // cout << strin << endl;
            string str;
            str = strin.substr(0,4);
            // cout << "strin.s " << str << endl;
            // cout << "strin.a " << (strin[5] - '0') << endl;
            // cout << "strin.b " << (strin[7] - '0') << endl;
            v.push_back(node{str, (strin[5] - '0'), (strin[7] - '0')});
        }
        int tmp = 0;
        string strans;
        for(int i = 0; i < 10000; i++){
            int fg = 0;
            string nstr;
            if(i < 10){
                nstr = "000"; 
                nstr += to_string(i);
            } 
            else if(i < 100){
                nstr = "00"; 
                nstr += to_string(i);
            } 
            else if(i < 1000){
                nstr = "0"; 
                nstr += to_string(i);
            } 
            else nstr = to_string(i);
            
            for (int j = 0; j < n; ++j){
                int na = 0;
                int nb = 0;
                int ans_num[15] = {0};
                int test_num[15] = {0};
                for(int k = 0; k < 4; k++){
                    ans_num[v[j].str[k] - '0'] ++;
                    test_num[nstr[k] - '0'] ++;
                    if(v[j].str[k] == nstr[k]) na++;
                }
                for(int k = 0; k < 10; k++){
                    if(ans_num[k]&&test_num[k]) {
                        nb += min(ans_num[k],test_num[k]);
                        // cout << k << " "<< ans_num[k] << " " << test_num[k] << endl;
                    }
                }
                nb -= na;
                // cout << v[j].str << " "<< v[j].a << " "<< v[j].b << " " << endl;
                // cout  << "nstr : " << nstr << " str : " << v[j].str  << " " << na << " " << nb << endl;
                if(v[j].a == na && v[j].b == nb) fg = 1;
                else {
                    fg = 0;
                    break;
                }
            }
            if(fg){
                 tmp++;
                 strans = nstr;
                 // cout << nstr << endl;
            }
            else continue;
            if(tmp > 1) break;
        }
        // cout << "tmp : " << tmp << endl;
        if(tmp > 1) cout << "indeterminate" << endl;
        else if(tmp) cout << strans << endl;
        else cout << "impossible" << endl;
    }
    return 0;
}