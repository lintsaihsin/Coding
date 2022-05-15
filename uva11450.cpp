#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
  int dp[25][205] = {0};
  int item[25] = {0};
  vector<int> v[25];
  int cs;
  cin >> cs;
  while(cs--)
  {
    for (int i = 0; i < 25; ++i)
    {
      v[i].clear();
    }
    memset(dp, 0, sizeof(dp));
    memset(item, 0, sizeof(item));
    int mon, tar;
    cin >> mon >> tar;
    v[0].push_back(mon);
    item[0] = 1;
    dp[0][mon] = 1;
    for (int i = 1; i <= tar; ++i)
    {
      int t;
      cin >> t;
      item[i] = t;
      while(t--)
      {
        int pr;
        cin >> pr;
        v[i].push_back(pr);
      }
    }
    for (int i = 1; i <= tar; ++i)
    {
      for (int j = 0; j <= mon ; ++j)
      {
        if(dp[i-1][j])
        {
          for (int k = 0; k <v[i].size() ; ++k)
          {
            if(j - v[i][k] >= 0) dp[i][j - v[i][k]] = 1;
          }
        }
      }
    }

    int min = -1;
    for (int i = 0; i <= mon; ++i)
    {
      if(dp[tar][i])
      {
        min = i;
        break;
      }
    }

    if(min == -1) cout << "no solution" << endl;
    else cout << mon - min << endl; 

  }
  return 0;
}