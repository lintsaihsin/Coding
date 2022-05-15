#include<bits/stdc++.h>
using namespace std;

int main()
{
  int r, c;
  int css = 0;
  while(scanf("%d ", &r))
  {
    if(r == 0) break;
    else scanf("%d\n", &c);
    css++;
    if(css != 1) cout << endl;
    printf("puzzle #%d:\n", css);
    //cout << r << " " << c << endl;
    char arr[15][15] = { };
    int num[15][15] = {0};
    int cnt[15][15] = {0};
    int tmp[15][15] = {0};
    int nn = 1;
    for(int i = 0; i < r; i++)
    {
      for(int j = 0; j < c; j++)
      {
        cin >> arr[i][j];
        if(arr[i][j] == '*')
        {
          tmp[i][j] = 2;
        }
      }
    }

    for(int i = 0; i < r; i++)
    {
      for(int j = 0; j < c; j++)
      {
        if(isalpha(arr[i][j]))
        {
          int ni, nj;
          ni = i;
          nj = j;
          if(cnt[i][j] < 2)
          {
            num[ni][nj] = nn;
            nn++;
          }
          ni++;
          if(arr[ni][j] != '*' && ni != r) 
          {
            cnt[ni][j]++;
          }
          nj++;
          if(arr[i][nj] != '*' && nj != c) 
          {
            cnt[i][nj]++;
          }
          
        }
      }
    }

    // for(int i = 0; i < r; i++)
    // {
    //   for(int j = 0; j < c; j++)
    //   {
    //     cout << num[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    
    // for(int i = 0; i < r; i++)
    // {
    //   for(int j = 0; j < c; j++)
    //   {
    //     cout << arr[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    int acnt = 0;
    cout << "Across" ;
    for(int i = 0; i < r; i++)
    {
      for(int j = 0; j < c; j++)
      {
        if(arr[i][j] == '*') acnt = 0;
        else if(acnt == 0)
        {
          string str;
          cout << endl;
          str = to_string(num[i][j]); 
          for(int k = str.size(); k < 3; k++) cout << " ";
          cout << str  << "." << arr[i][j];
          acnt ++;
        }
        else cout << arr[i][j];
      }
      acnt = 0;
    }
    cout << endl;
    acnt = 0;
    cout << "Down" ;
    for(int i = 0; i < r; i++)
    {
      for(int j = 0; j < c; j++)
      {
        
        if(tmp[i][j] == 0)
        {
          string str;
          cout << endl;
          str = to_string(num[i][j]); 
          for(int k = str.size(); k < 3; k++) cout << " ";
          cout << num[i][j] << "." << arr[i][j] ;

          int ni;
          ni = i;
          while(1)
          {
            ni++;
            if(ni >= r) break;
            else if(arr[ni][j] == '*')
            {
              //cout << arr[ni][j]<< endl;
              break;
            }
            else 
            {
              cout << arr[ni][j];
              tmp[ni][j]++;
            }
          }
        }
        else continue;
      }
      acnt = 0;
    }
    cout << endl;


  }
  return 0;
}