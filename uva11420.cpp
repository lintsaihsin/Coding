#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int dp[70][70][2] = {0};
    dp[1][1][1] = 1;
    dp[1][0][0] = 1;
    for (int i = 2; i <= 65; ++i)
    {
        dp[i][0][0] = dp[i-1][1][1] + dp[i-1][0][0];
        for (int j = 1; j <= i; ++j)
        {
            dp[i][j][0] = dp[i-1][j][0] + dp[i-1][j+1][1];
            dp[i][j][1] = dp[i-1][j-1][0] + dp[i-1][j-1][1];
        }
    }
    int s, n;
    while(cin >> s >> n)
    {
        if(n < 0 || s < 0) break;
        cout << dp[s][n][0] + dp[s][n][1] << endl;
    }
    return 0;
}
