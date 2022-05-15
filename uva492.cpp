#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    set<char> s;
    s = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while(getline(cin, str))
    {
        int w = 0;
        char tmp = '\0';
        for (int i = 0; i < str.size(); ++i)
        {
            if(isalpha(str[i]))
            {
                if(w) cout << str[i];
                else
                {
                    if(!s.count(str[i]))
                    {
                        tmp = str[i];
                    }
                    else cout << str[i];
                }
                w++;
            }
            else
            {
                if(w)
                {
                    if(tmp) cout << tmp;
                    cout << "ay";
                }
                cout << str[i];

                w = 0;
                tmp = '\0';
            }
        }
        if(w)
        {
            if(tmp) cout << tmp;
            cout << "ay";
        }
        cout << endl;
    }
    return 0;
}