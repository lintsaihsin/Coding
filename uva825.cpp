#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d\n\n", &t);
    while(t--)
    {
        int n, m;
        int arr[100][100] = {0};
        int dp[100][100] = {0};
        scanf("%d %d\n", &n, &m);
        for (int i = 1; i <= n; ++i)
        {
            string str;
            getline(cin, str);
            stringstream ss(str);
            int j;
            ss >> j;
            while(ss >> j){
                arr[i][j] = -1;
            }
        }   
        if(arr[1][1] != -1) dp[1][1] = 1;
        for (int i = 1; i <= n ; ++i)
        {
            for (int j = 1; j <= m ; ++j)
            {
                if(arr[i][j] == -1) continue;
                if(i > 1) dp[i][j] += dp[i-1][j];
                if(j > 1) dp[i][j] += dp[i][j-1];
            }
        }
        cout << dp[n][m] << endl;
        if(t) cout << endl;;
    }
    return 0;
}