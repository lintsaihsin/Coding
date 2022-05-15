#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int prime[32770] = {0};
    prime[0] = 1;
    prime[1] = 1;
    for (int i = 4; i < 32768; i += 2 )prime[i] = 1;
    for (int i = 3; i < 32768; i += 2 )
    {
        if(prime[i] == 0)
        {
            for (int j = i*3 ; j < 32768; j += i * 2 )prime[j] = 1;
        }
    }
    
    int a;
    while(cin >> a && a != 0)
    {
        int tmp = 0;
        for (int i = 2; i <= a/2; i++ )
        {
            if(prime[i] == 0)
            {
                int j;
                j = a - i;
                if(prime[j] == 0) tmp++;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}