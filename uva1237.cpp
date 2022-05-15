#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int d, p, q;
        cin >> d;
        string a[d], nm;
        int arr[d], arr1[d];
        for (int i = 0; i < d; ++i) cin >> a[i] >> arr[i] >> arr1[i];
        
        cin >> q;
        for (int i = 0; i < q; ++i)
        {
            cin >> p;
            int cnt = 0;
            for (int i = 0; i < d; ++i)
            {
                if(p >= arr[i] && p <= arr1[i])
                {
                    cnt++;
                    if(cnt > 1) break;
                    else nm = a[i];
                }
            }
            if(cnt == 1) cout << nm << endl;
            else cout << "UNDETERMINED" << endl;
        }
        if(t != 0) cout << endl;
    }
    return 0;
}