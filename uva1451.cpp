#include<bits/stdc++.h>
using namespace std;
int prefix[100050];
int q[100050];
int is_convex(int x1, int x2, int x3, int x4){
    return (prefix[x2] - prefix[x1-1]) * (x4-x3+1) - (prefix[x4] - prefix[x3-1]) * (x2-x1 +1);
}
int main(){

    int t;
    cin>> t;
    while(t--){
        int n, L;
        int counter;
        cin>> n>> L;
        string str;
        cin>> str;
        prefix[0] = 0;
        for (int i = 1; i <= n; ++i)
            prefix[i] = prefix[i-1] + str[i-1] - '0';
        
        int lix = 1, rix = L;
        int i = 0, j = 0;
        for(int k = L; k <= n; k++){
            while(j-i>1 && is_convex(q[j-2], k-L, q[j-1], k-L) >= 0)
                j--;

            q[j++] = k-L+1;

            while(j-i>1 && is_convex(q[i], k, q[i+1], k) <= 0)
                i++;
            int ret = is_convex(q[i], k, lix, rix);
            if (ret > 0 || (ret == 0 && k - q[i] < rix - lix) ){
                lix = q[i];
                rix = k;
            }
        }
        printf("%d %d\n", lix, rix);
    }
    return 0;
}