#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int num = 1; num <= t; num++)
    {
        int n;
        scanf("%d\n", &n);
        string str;
        getline(cin,str);
        int tmp = 0;
        int cnt = 0;
        int ttl = 0;
        for (int i = 0; i < n; ++i)
        {
            if(str[i] == '.')tmp++;
            else if(str[i] == '#') 
            {
                if(tmp == -1) tmp = 0;
                else if(tmp%3 == 0 || tmp%3 == 2)
                {
                    ttl += tmp/3;
                    if(tmp % 3 > 0) ttl++;
                    tmp = 0;
                }
                else if(tmp%3 == 1)
                {
                    ttl += tmp/3 +1;
                    tmp = -1;
                }
            }
        }
        if(tmp > 0) ttl += tmp/3;
        if(tmp % 3 > 0) ttl++;
        cout << "Case " << num << ": " << ttl << endl;
    }
    return 0;
}