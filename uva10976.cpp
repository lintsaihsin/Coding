#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int arr[10000][2] = {0};
    while(cin >> t)
    {
        int cnt = 0;
        for (int i = t+1; i <= 2*t; ++i)
        {
            if((i*t) % (i-t) == 0)
            {
                arr[cnt][0] = (i*t) / (i-t);
                arr[cnt][1] = i;
                cnt++;
            }
        }
        cout << cnt << endl ;
        for (int i = 0; i < cnt; ++i)cout << "1/" << t << " = 1/" << arr[i][0] << " + 1/" << arr[i][1] << endl;
    }
    return 0;
}