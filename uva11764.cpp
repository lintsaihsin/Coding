#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[100];
    while(gets(arr))
    {
        if(arr[0] == '0') break;
        int size = 0;
        for (int i = 0; i < 33; ++i)
        {
            if(arr[i] > '9' || arr[i] <'0')break;
            else size++;
        }
        int tmp = 0;
        for (int i = 0; i < size; ++i)tmp += (arr[i]-'0')*(pow(2, (size - i))-1);
        cout << tmp << endl;
    }
    return 0;
}