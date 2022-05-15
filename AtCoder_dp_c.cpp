#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, dp[5][100050];
    cin >> t;
    cin >> dp[0][0] >> dp[1][0] >> dp[2][0];
    for (int i = 1; i < t; ++i)
    {
        cin >> dp[0][i] >> dp[1][i] >> dp[2][i];
        dp[0][i] += max(dp[1][i-1], dp[2][i-1]);
        dp[1][i] += max(dp[0][i-1], dp[2][i-1]);
        dp[2][i] += max(dp[0][i-1], dp[1][i-1]);
    }
    int ma;
    ma = max(dp[0][t-1], dp[1][t-1]);
    ma = max(ma, dp[2][t-1]);
    cout << ma;
    return 0;
}