#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int chk[10050];
    while(cin >> t && t != 0)
    {
        char ch;
        cin >> ch;
        int arr[10050];
        int ta[10050];
        for (int i = 0; i < t; ++i)
        {
            cin >> arr[i];
            ta[arr[i]] = i;
        }
        int tmp = 0;
        for (int i = 0; i < t; ++i)
        {
            for (int j = i+1; j < t; ++j)
            {
                if((2*arr[j] - arr[i]) > 0 && (2*arr[j] - arr[i]) < t && ta[2*arr[j] - arr[i]] > j)
                {
                    tmp++;
                    cout << "no" << endl;
                    break;
                }
            }
            if(tmp) break;
        }
        if(tmp == 0) cout << "yes" << endl;

    }
    return 0;
}