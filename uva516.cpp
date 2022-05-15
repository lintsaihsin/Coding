#include<bits/stdc++.h>
using namespace std;
long long int mul(int a, int b)
{
  long long int ans = 1;
  for (int i = 0; i < b; ++i)
  {
    ans *= a;
  }
  return ans;
}
int prime[100050] = {0};
int main(){
    string str;
    map<int, int, greater<int>> mp;

    
    vector<int> v;
    for (int i = 2; i < 100000; ++i)
    {
      if(prime[i] == 0)
      {
        v.push_back(i);
        for (int j = i; j < 100000; j = j + i)
        {
          prime[j] = 1;
        }
      }
    }

      // for (auto i : v)
      // {
      //   cout << i << endl;
      // }

    while(getline(cin, str))
    {
      if(str == "0") break;
      mp.clear();
      int cnt = 0;
      int a = 0;
      int b = 0;
      long long int ttl = 1;
      for (int i = 0; i < str.size(); ++i)
      {
        if(!cnt && isdigit(str[i]))
        {
          a = a * 10 + (str[i] - '0');
        }
        else if(!cnt)
        {
          cnt = 1;
        }
        else if(cnt && isdigit(str[i]))
        {
          b = b * 10 + (str[i] - '0');
        }
        else 
        {
          cnt = 0;
          ttl *= mul(a,b);
          a = b = 0;
        }
        
      }
      if(cnt) 
      {
        // cout << a << " " << b << endl;
        ttl *= mul(a, b);
      }
      //cout << ttl << endl;
      ttl--;
     
      while(ttl != 1)
      {
        for (int i = 0; i < v.size(); ++i)
        {
          while(ttl % v[i] == 0)
          {
            mp[v[i]]++;
            ttl /= v[i];
          }
        }
      }
      int tmp = 0;
      for (auto i : mp)
      {
        if(tmp != 0) cout << " ";
        cout << i.first << " " << i.second ;
        tmp++;
      }
      cout << endl;
  }
    return 0;
}