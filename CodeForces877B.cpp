#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    while(cin >> str){
        str = ' ' + str;
        int n = str.size();
        int a[5050] = {0};
        int b[5050] = {0};
        for(int i = 1; i < n; i++){
            if(str[i] == 'a')
                a[i]++;
            else
                b[i]++;
        }
        for(int i = 1; i <= n; i++){
            a[i] += a[i-1];
            b[i] += b[i-1];
        }
        cout <<"\n";
        int ans = 0;
        for(int i = 0; i <= n; i++){
            for(int j = i; j <=n; j++){
                int aa = a[n] - a[j] + a[i];
                int bb = b[j] - b[i];
                ans = max(aa+bb, ans);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}