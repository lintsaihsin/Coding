#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(int argc, char const *argv[])
{
    int dp[55][55];
    int l;
    while(cin >> l && l)
    {
        int n;
        cin >> n;
        v.clear();
        v.push_back(0);
        for (int i = 0; i < n; ++i)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        v.push_back(l);
        for (int i = 0; i < v.size(); ++i)
        {
            for (int j = 0; j < v.size(); ++j)
            {
                dp[i][j] = INT_MAX;
            }
        }
        for (int i = 1; i < v.size(); ++i)
        {
            dp[i-1][i] = 0;
        }
        for (int counter = 2; counter < v.size(); ++counter)
        {
            for (int i = 0; i < v.size() - counter; ++i)
            {
                int j = i + counter;
                for (int k = i + 1; k < j; ++k)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + v[j] - v[i]);
                }

            }
            
        }
        printf("The minimum cutting is %d.\n", dp[0][v.size()-1]);
    }
    return 0;
}