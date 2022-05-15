#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    while(cin >> n >> m && n != 0 && m != 0)
    {
        int arr[10005] = {0};
        int max1 = 1;
        int max2 = 1;
        
        for (int i = 0; i < n; ++i)
        {
            for (int i = 0; i < m; ++i)
            {
                int t;
                cin >> t;
                arr[t]++;
            }
        }
        for (int i = 0; i <= 10000; ++i)
        {
            if(arr[i] >= max2)
            {
                if(arr[i] >= max1)
                {
                    max2 = max1;
                    max1 = arr[i];
                }
                else max2 = arr[i];
            }
        }
        
        for (int i = 0; i <= 10000; ++i)if(arr[i] == max2) cout << i << " ";
    
        cout << endl;
    }
    
    return 0;
}