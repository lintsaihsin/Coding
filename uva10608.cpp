#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[30000] = {0};
        for (int i = 1; i <= n; ++i) arr[i] = i;
        while(m--)
        {
            int a, b;
            cin >> a >> b;
            for (int i = 1; i <= n; ++i)
            {
                if(arr[i] == arr[a] && arr[a] > arr[b] && i != a)arr[i] = arr[b];
                if(arr[i] == arr[b] && arr[b] > arr[a] && i != b)arr[i] = arr[a];
            }
            if(arr[a] > arr[b]) arr[a] = arr[b];
            else arr[b] = arr[a];
        }
        int cnt[30000] = {0};
        for (int i = 1; i <= n; ++i)cnt[arr[i]]++;
        int max = 0;
        for (int i = 1; i <= n; ++i)if(cnt[i] >= max) max = cnt[i];
        cout << max << endl;
    }
    
    return 0;
}