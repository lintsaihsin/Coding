#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    while(cin >> t && t != 0)
    {
        map<string , int> mp;
        while(t--)
        {
            int arr[6];
            for (int i = 0; i < 5; ++i)
            {
                cin >> arr[i];
            }
            sort(arr, arr+5);
            string str[6];
            string s;
            for (int i = 0; i < 5; ++i)
            {
                str[i] = to_string(arr[i]);
                s += str[i];
            }
            mp[s]++;
        }
        int maxx = 0;
        for(auto i : mp)
        {
            maxx = max(maxx, i.second);
        }
        int sum = 0;
        for (auto i : mp)
        {
            if(i.second == maxx) sum += i.second;
        }
        cout << sum << endl;

    }
    return 0;
}