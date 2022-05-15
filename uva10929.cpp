#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin >> str){
        if(str == "0")
            break;
        else
            cout << str << " is";
        int odd = 0, even = 0;
        for(int i = 0; i < str.size(); i++){
            if(i % 2){
                odd += (str[i] - '0');
            }
            else even += (str[i] - '0');
        }
        int ans;
        ans = abs(odd - even);
        if(ans % 11) 
            cout << " not a multiple of 11." << endl;
        else 
            cout << " a multiple of 11." << endl;
    }
    
}