#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    scanf("%d\n", &t);
    int tmp = 0;
    while(t--){
        int fa[30] = {0};
        if(tmp) cout << endl;
        tmp = 1;
        string str;
        // cout << t << endl;
        int n;
        while(getline(cin , str)){
            
            if(str.size() == 0) {
                set<int> st;
                st.clear();
                for (int i = 1; i <= n; ++i){
                    // cout << i << " " << fa[i] << endl;
                    st.insert(fa[i]);
                }
                    // for( auto i : st) cout << i << endl;
                // cout << st.size() << endl;
                break;
            }
            else if(str.size() == 1){
                memset(fa, 0, sizeof(fa));
                // cout << "n " << str[0] << " ";
                n = str[0] - 'A' +1;
                // cout << n << endl;
                for (int i = 1; i <= n; ++i)
                {
                    fa[i] = i;
                }
            }
            else{
                // cout << str[0] << " " << str[1] << endl;
                int a, b;
                a = str[0] - 'A' +1;
                b = str[1] - 'A' +1;
                // cout << a << " " << b << endl;
                if(fa[a] > fa[b]) {
                    swap(fa[a], fa[b]);
                }
                int tmp;
                tmp = fa[a];
                for (int i = 1; i <= n; ++i)
                {
                    if(fa[i] == tmp){
                        fa[i] = fa[b];
                    }
                }

            }
        }
        set<int> st;
        st.clear();
        for (int i = 1; i <= n; ++i){
            // cout << i << " " << fa[i] << endl;
            st.insert(fa[i]);
        }
            // for( auto i : st) cout << i << endl;
        cout << st.size() << endl;

    }
    return 0;
}