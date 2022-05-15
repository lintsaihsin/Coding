#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int main(){
    int t;
    cin >> t;
    int cnt = 0;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;
        for(int i = 4; i <= n; i++){
            arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % m + 1;
        }
        int a = 1000001;
        int ans[105] = {0};
        int num = k;
        for(int i = 1; i <= n; i++){
            if(arr[i] > k){
                continue;
            }
            else{
                if(ans[arr[i]] == 0){
                    num--;
                }
                ans[arr[i]] = i;
            }
            if(num == 0){
                int minn = INT_MAX, maxx = INT_MIN;
                for(int j = 1; j <= k; j++){
                    minn = min(ans[j], minn);
                    maxx = max(ans[j], maxx);
                }
                a = min(a, (maxx - minn));
            }
        }
        if(num == 0){
            cout << "Case " << ++cnt <<": " << a + 1 << '\n';
        }
        else{
            cout << "Case " << ++cnt <<": " << "sequence nai\n";
        }
    }
}