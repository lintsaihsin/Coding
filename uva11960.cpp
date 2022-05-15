#include <bits/stdc++.h>
using namespace std;

int arr[1000005] = {0};
int ans[1000005] = {0};
int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 1000000; ++i)
    {
        for (int j = 1; i*j <= 1000000; ++j)
        {
            arr[i*j]++;
        }
    }
    int max = 0;
    
    for (int i = 1; i <= 1000000; ++i)
    {
        if(arr[i] >= arr[max])
        {
            ans[i] = i;
            max = i; 
        }
        else ans[i] = max;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}