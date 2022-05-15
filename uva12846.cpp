#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
  int sg[25] = {0};
  int mex[105] = {0};
  for (int i = 0; i < 21; ++i)
  {
    sg[i] = i;
  }

  for (int i = 3; i <= 20; ++i)
  {
    int m2, m1;
    m2 = (i-2) / 2 + (i-2) % 2;
    m1 = (i-1) / 2 + (i-1) % 2;
   //  printf("%d %d %d\n",i, m2, m1);
    memset(mex, 0, sizeof(mex));

    for (int j = i-2; j >= m2; --j)
    {
      int tmp;
      tmp = sg[j] ^ sg[i-j-2];
      mex[tmp] = 1;
     // printf("%d %d %d\n",j, i-j-2, tmp);
    }
    for (int j = i-1; j >= m1; --j)
    {
      int tmp;
      tmp = sg[j] ^ sg[i-j-1];
      mex[tmp] = 1;
      //printf("%d %d %d\n",j, i-j-1, tmp);
    }

    for (int j = 0; j <= i; ++j)
    {
      if(mex[j] == 0)
      {
        sg[i] = j;
        break;
      }
    }
  }

  
  int t;
  cin >> t;
  for (int cs = 1; cs <= t ; ++cs)
  {
    int a, b;
    cin >> a >> b;
    int sp[25] = {0};
    int tmp1, tmp2;
    tmp1 = tmp2 = 0; 
    sp[0] = 0;
    for (int i = 1; i <= b; ++i)
    {
      cin >> sp[i];
      if(sp[i] == 1) tmp1 = 1;
      else if(sp[i] == a) tmp2 = 1;
    }
    sp[b+1] = a+1;
    vector<int> v;
    v.clear();
    for(int i = 1; i <= b+1; i++)
    {
      int tmp;
      tmp = sp[i] - sp[i-1] - 1;
      if(tmp)
      {
        if(i != b+1)
        {
          v.push_back(tmp);
        }
        else
        {
          if(tmp1 || tmp2) v.push_back(tmp);
          else v[0] += tmp;
        }
      }  
    }
    int ans = 0;

    for(int i = 0; i < v.size(); i++) ans ^=  sg[v[i]];

    cout << "Case " << cs;
    if(ans) cout <<": yes" << endl;
    else cout <<": no" << endl;
  }
  

    
  
  return 0;
}