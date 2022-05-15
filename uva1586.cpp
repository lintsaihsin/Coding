#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<char, double> mp;
  mp['C'] = 12.010;
  mp['H'] = 1.008;
  mp['O'] = 16.000;
  mp['N'] = 14.010;
  int t;
  cin >> t;
  while(t--)
  {
    double ttl = 0;
    string str;
    cin >> str;
    double cnt = 0;
    int mul = 1;
    int tmp = 0;
    for(int i = 0; i < str.size(); i++)
    {
      
      if(isalpha(str[i]))
      {
        cnt *= mul;
        ttl += cnt;
        cnt = mp[str[i]];
        tmp = 0;
        mul = 1;
      }
      else
      {
        if(tmp != 0)mul *= 10;
        else mul = 0;
        mul += (str[i] - '0');
        tmp++;
      }
    }
    ttl += (cnt * mul);
    string ans;
    ans = to_string(ttl);
    int dt = 0;
    for(int i = 0; i < ans.size(); i++)
    {
      if(ans[i] == '.')
      {
        dt = i;
      }
    }
    //cout << "dt : " << dt << endl;
    ans.erase(dt+4, 3);
   cout << ans << endl;
  }
  return 0;
}