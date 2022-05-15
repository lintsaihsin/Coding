#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    stack <int> st[55];
    st[1].push(1);
    int arr[55];
    arr[1] = 1;
    int num = 2;
    int n = 1;
    
    while(n < 52)
    {
        int fg = 0;
        for (int i = 1; i <= n; ++i)
        {
            int tmp, tmp2;
            tmp = num + st[i].top();
            tmp2 = sqrt(tmp);
            if( tmp == tmp2 * tmp2)
            {
                st[i].push(num);
                num++;
                fg = 1;
            }
        }
        if(fg == 0)
        {
            arr[n] = num -1;
            n++;
            st[n].push(num);
            num++;
        }
    }
    while(t--)
    {
        int ans;
        cin >> ans;
        cout << arr[ans] << endl;
    }
    return 0;
}