#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for( int cs = 1; cs <= t; cs++)
    {
        string str;
        cin >> str;
        int ttl = 0;
        int arr[5] = {0};
        for (int i = 0; i < str.size(); ++i)
        {
            ttl += (str[i] - '0') % 3;
            arr[(str[i] - '0') % 3]++;
        }
        int cnt = 0;
        ttl %= 3;
        if(arr[ttl]) 
        {
            cnt += arr[0];
            if(ttl != 0) cnt++;
        }
        else if(str.size() == 1) cnt = 1;
        if(cnt % 2 == 0) printf("Case %d: %c\n", cs, 'T');
        else printf("Case %d: %c\n", cs, 'S');

    }
    return 0;
}