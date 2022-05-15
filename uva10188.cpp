#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int cs = 0;
    while(cin >> t&& t != 0)
    {
        cin.ignore();
        cs++;
        string str[105] = {};
        vector<char> v;
        if(!v.empty())v.pop_back();
        for (int i = 0; i < t; ++i)
        {
            getline(cin, str[i]);
        }
        for (int i = 0; i < t; ++i)
        {
            for (int j = 0; j < str[i].size(); ++j)
            {
                if(isdigit(str[i][j]))
                {
                    v.push_back(str[i][j]);
                }
            }
        }
        int t2;
        cin >> t2;
        cin.ignore();
        string strin[105] = {};
        vector<char> vin;
        if(!vin.empty())vin.pop_back();
        for (int i = 0; i < t2; ++i)
        {
            getline(cin, strin[i]);
        }
        for (int i = 0; i < t2; ++i)
        {
            for (int j = 0; j < strin[i].size(); ++j)
            {
                if(isdigit(strin[i][j]) )
                {
                    vin.push_back(strin[i][j]);
                }
            }
        }
        int tmp = 0;
        if(v == vin)
        {
            if(t == t2)
            {
                for (int i = 0; i < t; ++i)
                {
                    if(str[i] != strin[i])
                    {
                        tmp = 1;
                        break;
                    }
                }
                if(tmp == 0) printf("Run #%d: Accepted\n", cs);
                else printf("Run #%d: Presentation Error\n", cs);
            }
            else printf("Run #%d: Presentation Error\n", cs);       
        }
        else printf("Run #%d: Wrong Answer\n", cs);
     }
    return 0;
}