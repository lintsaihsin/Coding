#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int prime[1125] = {0};
    prime[0] = prime[1] = 1;
    for (int i = 2; i < 1125 ; i++)
    {
        if(prime[i] == 0)
        {
            for (int j = i+i; j < 1125; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    int p[187];
    int cnt = 0;
    int dp[1200][15] = {0};
    for (int i = 1; i < 1125; ++i)
    {
        if(prime[i] == 0) 
        {
            p[cnt] = i;
            cnt++;
        }
    }
    

    dp[0][0]=1;
    for (int i = 0; i < 187; ++i)
    {
        for (int j = 1125; j >= p[i] ; --j)
        {
            for (int k = 1; k < 15; ++k)
            {
                dp[j][k] += dp[j-p[i]][k-1];
            }
        }
    }
    int n, k;
    while(cin >> n >> k)
    {
        if(n == 0 && k == 0) break;
        cout << dp[n][k] << endl;
    }
    return 0;
}
