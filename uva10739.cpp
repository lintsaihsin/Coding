#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005] = {0};
int main()
{
  int t;
  cin >> t;
  for (int cs = 1; cs <= t; ++cs)
  {
    string str;
    cin >> str;
    memset(dp, 0, sizeof(dp));
    for (int i = str.size()-1; i >= 0 ; --i)
    {
      for (int j = i; j < str.size(); ++j)
      {
        if(str[i] == str[j])
        {
          dp[i][j] = dp[i+1][j-1];
        }
        else
        {
          dp[i][j] = min(dp[i+1][j], dp[i][j-1]);
          dp[i][j] = min(dp[i][j], dp[i+1][j-1]);
          dp[i][j]++;
        }
      }
    }
    printf("Case %d: %d\n", cs, dp[0][str.size()-1]); 
  }
  return 0;
}

//E