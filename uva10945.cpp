#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin, str)){
        if(str == "DONE") 
            break;
        string tmp = "";
        for(int i = 0; i < str.size(); i++){
            if(isalpha(str[i]))
                tmp.push_back(toupper(str[i]));
        }
        str = tmp;
        reverse(str.begin(), str.end());
        if(tmp == str)
            cout << "You won't be eaten!\n";
        else 
            cout << "Uh oh..\n";
    }
    return 0;
}