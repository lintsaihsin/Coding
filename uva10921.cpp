#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    while(cin >> str)
    {
        for (int i = 0; i < str.size(); ++i)
        {
            if(isalpha(str[i]))
            {
                if(str[i] == 'S' ||str[i] == 'V' ||str[i] == 'Y' ||str[i] == 'Z') str[i] -= 2;
                cout <<(str[i] - 'A')/3 +2 ;
                
            }
            else cout << str[i];
            
        }
        cout << endl;
    }
    return 0;
}