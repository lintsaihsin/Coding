#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int d;
        cin >> d;
        int arr[3655]= {0};
        cin>>n;
        while(n--)
        {
            int a;
            cin >> a;
            for (int i = 1; i <= d; ++i)if(i % a == 0) arr[i]++;
        }
        int cnt = 0;
        for (int i = 1; i <= d; ++i)
        {
            if(arr[i] > 0)
            {
                cnt++;
                if(i % 7 == 6 || i % 7 == 0)cnt--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}