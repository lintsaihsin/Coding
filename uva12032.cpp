#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int ca = 1; ca <= t; ++ca)
    {
        int n;
        cin >> n;
        int arr[100000];
        arr[0] = 0;
        for (int i = 1; i <= n; ++i)cin >> arr[i];
        int maxn = 0;
        for (int i = n; i > 0; --i)
        {
            arr[i] -= arr[i-1];
            if(maxn == arr[i]) maxn++;
            else maxn = max(maxn, arr[i]);
        }
        cout << "Case " << ca << ": " << maxn << endl;
    
    }
    return 0;
}