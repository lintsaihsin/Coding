#include<bits/stdc++.h>
using namespace std;

int main()
{
  int flag = 0;
  string str;
  while(getline(cin,str))
  {
    for (int i = 0; i < str.size(); ++i)
    {
      if(str[i] == '"')
      {
        if(flag == 0) 
        {
          cout << "``";
          flag++;
        }
        else 
        {
          cout << "''";
          flag--;
        }

      }
      else cout << str[i];
    }
    cout << endl;
  }
  return 0;
}
