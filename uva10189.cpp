#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    int t = 0;
    while(cin >> n >> m && n != 0 && m != 0)
    {
        t++;
        int ans[105][105] = {0};
        char arr[105][105] ;
        if(t != 1) cout << endl;
        cout << "Field #" << t << ":" << endl;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> arr[i][j];
                if(arr[i][j] == '*')
                {
                    ans[i-1][j]++;
                    ans[i-1][j-1]++;
                    ans[i-1][j+1]++;
                    ans[i][j-1]++;
                    ans[i][j+1]++;
                    ans[i+1][j]++;
                    ans[i+1][j-1]++;
                    ans[i+1][j+1]++;
                }
            }
        }


        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if(arr[i][j] == '*') cout << arr[i][j];
                else cout << ans[i][j];
            }
            cout << endl;
        }
        
    }

    return 0;
}