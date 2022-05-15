#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int t = 0;
    while(scanf("%d\n" , &n ) && n != 0)
    {
                t++; 
        cout << "SET " << t << endl;
        string str;
        char c[20][30];
        for (int i = 0; i < n; ++i)
        {
            getline(cin,str);
            for (int j = 0; j < sizeof(str); ++j)c[i][j] = str[j];
        }
        for (int i = 0; i < n; ++i)if(i % 2 == 0)cout << c[i] << endl;
        if(n % 2 == 0)for (int i = n-1 ; i >= 1; i -= 2)cout << c[i] << endl;
        else for (int i = n-2 ; i >= 1; i -= 2)cout << c[i] << endl;
    }
    return 0;
}