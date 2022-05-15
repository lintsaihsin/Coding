#include<bits/stdc++.h>
using namespace std;

int main()
{
  char kb[55] = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
  string str;
  while(getline(cin, str))
  {
    for (int i = 0; i < str.size(); i++)
    {
      int flag = 0;
      for(int j = 0; j < 50; j++)
      {
        if(str[i] == kb[j])
        {
          cout << kb[j-1];
          flag++;
          break;
        }
      }
      if(flag == 0) cout << str[i];
    }
    cout << endl;
  }
  
  return 0;
}