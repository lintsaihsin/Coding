#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    int ca = 0;
    while(cin >> n >> m && n != 0 || m != 0)
    {
        ca++;
        cout << "Case " << ca << ": " ;
        int arr[50000] = {0};
        for (int i = 1; i <= n; ++i) arr[i] = i;
        for (int i = 0; i < m; ++i)
        {
            int x, y;
            cin >> x >> y;
            if(arr[x] < arr[y])
            {
                for (int j = 1; j <= n ; ++j)if(arr[j] == arr[y]&& j != y) arr[j] = arr[x];
                arr[y] = arr[x];
            }
            if(arr[y] < arr[x])
            {
                for (int j = 1; j <= n; ++j)if(arr[j] == arr[x] && j != x) arr[j] = arr[y];
                arr[x] = arr[y];
            }
        }
        int tmp = 0;
        for (int i = 1; i <= n; ++i)if(arr[i] == i) tmp++;
        cout << tmp << endl;
    }
    return 0;
}