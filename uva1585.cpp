#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string str;
    cin >> str;
    int cnt = 0;
    int ttl = 0;
    for(int i = 0; i < str.size(); i++)
    {
      if(str[i] == 'O')
      {
        cnt++;
        ttl += cnt;
      }
      else
      {
        cnt = 0;
      }
    }
    cout << ttl << endl;
   
  }
  return 0;
}