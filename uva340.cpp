#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int g = 0;
  while(cin >> t)
  {
    if(t == 0) break;
    g++;
    printf("Game %d:\n", g);
    int a[1050] = {0};
    int ans[1050] = {0};
    
    int str[1050] = {0};
    for(int i = 0; i < t; i++)
    {
      cin >> a[i];
      ans[a[i]]++;
    }
    
    while(1)
    {
      int tmp[1050] = {0};
      int cnt = 0;
      int num = 0;
      int cor = 0;
      for(int i = 0; i < t; i++)
      {
        cin >> str[i];
        tmp[str[i]]++;
        if(str[i] == 0) cnt++; 
        if(str[i] == a[i])
        {
          cor++;
          
        }
        else continue;
      }
      int ttl = 0;
      for(int i = 0; i <= 9; i++)
      {
        int minn;
        minn = min(tmp[i], ans[i]);
        ttl+= minn;
      }
      
      if(cnt == t) break;
      printf("    (%d,%d)\n",cor,ttl-cor);
    }
  }
  return 0;
}