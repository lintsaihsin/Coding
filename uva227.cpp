#include<bits/stdc++.h>
using namespace std;

int main()
{
  int cs = 1;
  while(cs)
  {
    
    char arr[10][10] = {};
    for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 5; j++)
      {
        arr[i][j] = ' ';
      }
    }
    int si, sj;
    int ou = 0;
    for(int i = 0; i < 5; i++)
    {
      string str;
      getline(cin, str);
      //cout << "str" << i << " : " << str << endl;
      if(str.size() == 1 && str[0] == 'Z')
      {
        ou = 1;
        break;
      }
      for(int j = 0; j < 5; j++)
      {
        arr[i][j] = str[j];
        if(str[j] == ' ') 
        {
          si = i;
          sj = j;
        }
        else if(str.size() == 4 && j == 4)
        {
          si = i;
          sj = 4;
          arr[i][j] = ' ';
        }
        
      }
    }
    // for(int i = 0; i < 5; i++)
    //       {
    //         for(int j = 0; j < 5; j++)
    //         {
    //           cout << arr[i][j] << " ";
    //         }
    //         cout << endl;
    //       }
    if(ou) break;
    if(cs > 1) cout << endl;
    
    printf("Puzzle #%d:\n", cs);
    cs++;
    string tmp;
    string str;
    int cnt = 0;
    while(getline(cin, str))
    {
      if(cnt == 0)
      {
        tmp = str;
        cnt++;
      }
      else
      {
        tmp = tmp + str;
      }
      
      int ans = 0;
      if(tmp[tmp.size()-1] == '0')
      {
        //cout << "tmp : " << tmp << endl;
        for(int k = 0; k < tmp.size(); k++)
        {
          //cout << tmp[k] << endl;
          if(tmp[k] == 'A')
          {
            if(si == 0)
            {
              ans = 1;
              break;
            }
            //cout << arr[si][sj] << " ";
            swap(arr[si][sj] , arr[si-1][sj]);
            //cout << arr[si][sj] << endl;
            si--;
          }
          else if(tmp[k] == 'B')
          {
            if(si == 4)
            {
              ans = 1;
              break;
            }
            //cout << arr[si][sj] << " ";
            swap(arr[si][sj] , arr[si+1][sj]);
            //cout << arr[si][sj] << endl;
            si++;
          }
          else if(tmp[k] == 'R')
          {
            if(sj == 4)
            {
              ans = 1;
              break;
            }
            //cout << arr[si][sj] << " ";
            swap(arr[si][sj] , arr[si][sj+1]);
            //cout << arr[si][sj] << endl;
            sj++;
          }
          else if(tmp[k] == 'L')
          {
            if(sj == 0)
            {
              ans = 1;
              break;
            }
            //cout << arr[si][sj] << " ";
            swap(arr[si][sj] , arr[si][sj-1]);
            //cout << arr[si][sj] << endl;
            sj--;
          }
          else if(tmp[k] != '0')
          {
            ans = 1;

          }
        }
        if(ans) cout << "This puzzle has no final configuration." << endl;
        else
        {
          for(int i = 0; i < 5; i++)
          {
            for(int j = 0; j < 5; j++)
            {
              if(j != 0) cout << " ";
              cout << arr[i][j] ;
              
            }
            cout << endl;
          }
        }
        break;
      }
    }
  }
  return 0;
}