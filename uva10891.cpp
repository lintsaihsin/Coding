#include <bits/stdc++.h>
using namespace std;
long long int max( long long int a, long long int b)
{
  if(a >= b) return a;
  else return b;
}
int main()
{
  int t;
  while(cin >> t)
  {
    long long int sum[105][105] = {0};
    long long int maxa[105][105] = {0};
    long long int q[105] = {0};
    if(t == 0) break;
    for (int i = 0; i < t; ++i)
    {
      cin >> q[i];
      sum[i][i] = q[i];
      maxa[i][i] = q[i];
    }

    for (int i = 0; i < t; ++i)
    {
      for (int j = i; j < t; ++j)sum[i][j] = sum[i][j-1] + q[j];
    }
    for (int i = t-1; i >= 0; --i)
    {
      for (int j = i; j < t; ++j)
      {
        long long int lmax, rmax;
        lmax = sum[i][i] + sum[i+1][j] - maxa[i+1][j];
        for (int k = i+1; k < j; ++k)
        {
          long long int tmpl;
          tmpl = sum[i][k] + sum[k+1][j] - maxa[k+1][j];
          lmax = max(lmax, tmpl);
        }

        rmax = sum[i][j-1] - maxa[i][j-1] + sum[j][j];
        for (int k = j-1; k > i; --k)
        {
          long long int tmpr;
          tmpr = sum[i][k-1] - maxa[i][k-1] + sum[k][j];
          rmax = max(rmax, tmpr);
        }
        //printf("sum[%d][%d] = %d, lmax = %d rmax = %d \n", i, j, sum[i][j], lmax, rmax);
        if(i != j)
        {
          maxa[i][j] = max(sum[i][j], lmax);
          maxa[i][j] = max(maxa[i][j], rmax);
        }
       // printf("maxa[%d][%d]\n", i, j);
        
      }
      
    }

    // for (int i = 0; i < t; ++i)
    // {
    //   for (int j = i; j < t; ++j)
    //   {
    //     printf("[%d][%d] : ", i, j);
    //     cout << sum[i][j] << " ";
    //   }
    //   cout << endl;
    // }


    // for (int i = 0; i < t; ++i)
    // {
    //   for (int j = i; j < t; ++j)
    //   {
    //     printf("[%d][%d] : ", i, j);
    //     cout << maxa[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    cout << 2*maxa[0][t-1] - sum[0][t-1] << endl;
  }
  return 0;
}

//E