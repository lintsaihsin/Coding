#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int ca;
    cin >> ca;
    int flag = 0;
    int arr[100] = {0};
    while(ca--)
    {

        if(flag) cout << endl;
        flag = 1;
        int n, num;
        cin >> n;
        int sum = 0;
        for (int i = 2; i <= n; ++i)
        {
            arr[i] = i;
            sum += i;
            if(sum > n)
            {
                num = i-1;
                sum -= i;
                break;
            }
        }
        int h;
        h = n-sum;
        while(h >0)
        {
            for (int i = num; i > 1; i--)
            {
                if(h <= 0) break;
                arr[i]++;
                h--;
            }
        }

        for (int i = 2; i < num; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << arr[num] << endl;

    }
    return 0;
}