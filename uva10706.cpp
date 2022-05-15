#include <bits/stdc++.h>
using namespace std;
//#define IOS cin.tie(nullptr); cout.tie(nullptr); ios_base:: sync_with_stdio(false);

char arr[500000] = {0};
long long chk[500000] = {0};
int main(int argc, char const *argv[])
{
    //IOS;
    long long tmp = 0;
    for (long long i = 1; tmp < 499950; ++i)
    {
        string str;
        str = to_string(i);
        for (long long j = 0; j < str.size(); ++j)
        {
            arr[tmp]  = str[j];
            tmp++;
        }
        chk[i] = chk[i-1] + str.size();
    }
    
    long long n;
    cin >> n;
    while(n--)
    {
        long long m;
        cin >> m;
        for (long long i = 1; ; ++i)
        {
            if(chk[i] < m)
            {
                m -= chk[i];
            }
            else
            {
                cout << arr[m -1] << endl;
                break;
            }
        }
    }
    return 0;
}