#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    
    while(getline(cin,str))
    {
        int cnt = 0;
        int ttl = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            if(isalpha(str[i])) cnt++;
            else 
            {
                if(cnt > 0)
                {
                    ttl++;
                    cnt = 0;
                }
            }
        }
        if(cnt > 0)ttl++;
        cout << ttl << endl;

    }
    return 0;
}