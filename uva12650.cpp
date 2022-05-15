#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, n;
    while(cin >> r >> n)
    {
        int arr[10005] = {0};
        while(n--)
        {
            int a;
            cin >> a;
            arr[a]++;
        }
        int cnt = 0;
        for (int i = 1; i <= r; ++i)
        {
            if(arr[i] != 1)
            {
                cout << i << " ";
                cnt++;
            } 
        }
        if(cnt == 0) cout << "*";
        cout << endl;
    }
}