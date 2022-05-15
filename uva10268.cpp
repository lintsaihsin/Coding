#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while( cin >> n)
    {
        getchar();
        string str;
        getline(cin, str);
        vector<int> vec;

        stringstream ss(str);
        int tmp;
        while(ss >> tmp) vec.push_back(tmp);
            
        int t = (vec.size() - 1);
        int ans = 0;
        int mul = 1;
        
        for (int i = t-1 ; i >= 0; i--)
        {
            ans += vec[i] * (t - i) * mul;
            mul *= n;
        }
        cout << ans << endl;
    }
    return 0;
}